﻿using ComputeSharp;
using ComputeSharp.D2D1;

namespace ExampleGallery.PixelShaders;

/// <summary>
/// A pixel shader using a sobel kernel to create a normal map from a height map.
/// See: <see href="https://en.wikipedia.org/wiki/Sobel_operator"/>.
/// </summary>
[D2DInputCount(1)]
[D2DInputComplex(0)]
[D2DShaderProfile(D2D1ShaderProfile.PixelShader40)]
[D2DRequiresScenePosition]
public readonly partial struct SobelShader : ID2D1PixelShader
{
    /// <inheritdoc/>
    public float4 Execute()
    {
        // Sample pixels in a 3x3 window around the current pixel
        float x00 = D2D.SampleInputAtOffset(0, new float2(-1, -1)).X;
        float x01 = D2D.SampleInputAtOffset(0, new float2(0, -1)).X;
        float x02 = D2D.SampleInputAtOffset(0, new float2(1, -1)).X;
        float x10 = D2D.SampleInputAtOffset(0, new float2(-1, 0)).X;
        float x12 = D2D.SampleInputAtOffset(0, new float2(1, 0)).X;
        float x20 = D2D.SampleInputAtOffset(0, new float2(-1, 1)).X;
        float x21 = D2D.SampleInputAtOffset(0, new float2(0, 1)).X;
        float x22 = D2D.SampleInputAtOffset(0, new float2(1, 1)).X;

        // Compute the approximate horizontal derivative:
        //
        // Gx = [ +1, 0, -1 ]
        //      [ +2, 0, -2 ]
        //      [ +1, 0, -1 ]
        float gx =
            (1 * x00) + (-1 * x02) +
            (2 * x10) + (-2 * x12) +
            (1 * x20) + (-1 * x22);

        // Compute the approximate vertical derivative:
        //
        // Gy = [ +1, +2, +1 ]
        //      [  0,  0,  0 ]
        //      [ -1, -2, -1 ]
        float gy =
            (1 * x00) + (2 * x01) + (1 * x02) +
            (-1 * x20) + (-2 * x21) + (-1 * x22);

        // Compute the magnitude and direction of the vector
        float r = Hlsl.Length(new float2(gx, gy));
        float theta = Hlsl.Atan2(gy, gx);

        // Convert from polar to cartesian coordinates
        float dx = r * Hlsl.Cos(theta);
        float dy = r * Hlsl.Sin(theta);

        return new(dx, dy, 1, 1);
    }
}