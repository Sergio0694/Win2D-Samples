// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Microsoft_Graphics_Canvas_Brushes_1_H
#define WINRT_Microsoft_Graphics_Canvas_Brushes_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.0.h"
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Brushes
{
    struct __declspec(empty_bases) ICanvasBrush :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasBrush>,
        impl::require<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush, winrt::Windows::Foundation::IClosable>
    {
        ICanvasBrush(std::nullptr_t = nullptr) noexcept {}
        ICanvasBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasImageBrush :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasImageBrush>,
        impl::require<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasImageBrush, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>
    {
        ICanvasImageBrush(std::nullptr_t = nullptr) noexcept {}
        ICanvasImageBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasImageBrushFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasImageBrushFactory>
    {
        ICanvasImageBrushFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasImageBrushFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasLinearGradientBrush :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasLinearGradientBrush>,
        impl::require<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasLinearGradientBrush, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>
    {
        ICanvasLinearGradientBrush(std::nullptr_t = nullptr) noexcept {}
        ICanvasLinearGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasLinearGradientBrushFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasLinearGradientBrushFactory>
    {
        ICanvasLinearGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasLinearGradientBrushFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasLinearGradientBrushStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasLinearGradientBrushStatics>
    {
        ICanvasLinearGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasLinearGradientBrushStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRadialGradientBrush :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRadialGradientBrush>,
        impl::require<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasRadialGradientBrush, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>
    {
        ICanvasRadialGradientBrush(std::nullptr_t = nullptr) noexcept {}
        ICanvasRadialGradientBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRadialGradientBrushFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRadialGradientBrushFactory>
    {
        ICanvasRadialGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasRadialGradientBrushFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasRadialGradientBrushStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasRadialGradientBrushStatics>
    {
        ICanvasRadialGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasRadialGradientBrushStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSolidColorBrush :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSolidColorBrush>,
        impl::require<winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasSolidColorBrush, winrt::Windows::Foundation::IClosable, winrt::Microsoft::Graphics::Canvas::Brushes::ICanvasBrush>
    {
        ICanvasSolidColorBrush(std::nullptr_t = nullptr) noexcept {}
        ICanvasSolidColorBrush(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSolidColorBrushFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSolidColorBrushFactory>
    {
        ICanvasSolidColorBrushFactory(std::nullptr_t = nullptr) noexcept {}
        ICanvasSolidColorBrushFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICanvasSolidColorBrushStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICanvasSolidColorBrushStatics>
    {
        ICanvasSolidColorBrushStatics(std::nullptr_t = nullptr) noexcept {}
        ICanvasSolidColorBrushStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
