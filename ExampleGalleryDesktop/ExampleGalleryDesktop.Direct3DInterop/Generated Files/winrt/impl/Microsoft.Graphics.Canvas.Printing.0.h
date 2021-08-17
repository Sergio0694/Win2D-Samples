// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Microsoft_Graphics_Canvas_Printing_0_H
#define WINRT_Microsoft_Graphics_Canvas_Printing_0_H
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas
{
    struct CanvasDevice;
    struct CanvasDrawingSession;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing
{
    struct PrintTaskOptions;
}
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas::Printing
{
    struct ICanvasPreviewEventArgs;
    struct ICanvasPrintDeferral;
    struct ICanvasPrintDocument;
    struct ICanvasPrintDocumentFactory;
    struct ICanvasPrintEventArgs;
    struct ICanvasPrintTaskOptionsChangedEventArgs;
    struct CanvasPreviewEventArgs;
    struct CanvasPrintDeferral;
    struct CanvasPrintDocument;
    struct CanvasPrintEventArgs;
    struct CanvasPrintTaskOptionsChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> = L"Microsoft.Graphics.Canvas.Printing.CanvasPreviewEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral> = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDeferral";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument> = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintDocument";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> = L"Microsoft.Graphics.Canvas.Printing.CanvasPrintTaskOptionsChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPreviewEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDeferral";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocument";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintDocumentFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs> = L"Microsoft.Graphics.Canvas.Printing.ICanvasPrintTaskOptionsChangedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>{ 0x0A6A80A0,0xB07D,0x4DB2,{ 0xBD,0xEB,0x03,0x68,0xBB,0x18,0xC0,0xF8 } }; // 0A6A80A0-B07D-4DB2-BDEB-0368BB18C0F8
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>{ 0x08CA99A2,0x5801,0x4EA4,{ 0x86,0x87,0x89,0x6C,0xBD,0xA6,0x9A,0x47 } }; // 08CA99A2-5801-4EA4-8687-896CBDA69A47
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>{ 0x0A99CDEE,0xBF11,0x49D0,{ 0xAA,0x34,0x3B,0xA5,0xC3,0x2C,0x51,0xA5 } }; // 0A99CDEE-BF11-49D0-AA34-3BA5C32C51A5
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>{ 0xA201AF1E,0xCE4A,0x401D,{ 0xA7,0x19,0x2B,0xF0,0x04,0xD5,0xC2,0x6A } }; // A201AF1E-CE4A-401D-A719-2BF004D5C26A
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>{ 0x0C6148C4,0x0216,0x4561,{ 0xA8,0x17,0x34,0xC8,0x94,0x2A,0xAC,0x8B } }; // 0C6148C4-0216-4561-A817-34C8942AAC8B
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>{ 0xF92089BA,0x6C99,0x4CAC,{ 0xB2,0x8A,0xB5,0xDC,0xEC,0x7A,0x31,0x0D } }; // F92089BA-6C99-4CAC-B28A-B5DCEC7A310D
    template <> struct default_interface<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs>{ using type = winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs; };
    template <> struct default_interface<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral>{ using type = winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral; };
    template <> struct default_interface<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument>{ using type = winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument; };
    template <> struct default_interface<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs>{ using type = winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs; };
    template <> struct default_interface<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs>{ using type = winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs; };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PageNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_DrawingSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrintTaskOptionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintTaskOptionsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Preview(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Preview(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Print(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Print(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall InvalidatePreview() noexcept = 0;
            virtual int32_t __stdcall SetPageCount(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetIntermediatePageCount(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWithDevice(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dpi(float*) noexcept = 0;
            virtual int32_t __stdcall put_Dpi(float) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall CreateDrawingSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentPreviewPageNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NewPreviewPageNumber(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_NewPreviewPageNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PageNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Printing::PrintTaskOptions) PrintTaskOptions() const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral) GetDeferral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::CanvasDrawingSession) DrawingSession() const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPreviewEventArgs>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDeferral>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDeferral<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument
    {
        WINRT_IMPL_AUTO(winrt::event_token) PrintTaskOptionsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const;
        using PrintTaskOptionsChanged_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument, &impl::abi_t<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_PrintTaskOptionsChanged>;
        [[nodiscard]] PrintTaskOptionsChanged_revoker PrintTaskOptionsChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintTaskOptionsChangedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) PrintTaskOptionsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Preview(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const;
        using Preview_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument, &impl::abi_t<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_Preview>;
        [[nodiscard]] Preview_revoker Preview(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPreviewEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) Preview(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Print(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const;
        using Print_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument, &impl::abi_t<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>::remove_Print>;
        [[nodiscard]] Print_revoker Print(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument, winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) Print(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) InvalidatePreview() const;
        WINRT_IMPL_AUTO(void) SetPageCount(uint32_t count) const;
        WINRT_IMPL_AUTO(void) SetIntermediatePageCount(uint32_t count) const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocument>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocument<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDocument) CreateWithDevice(winrt::Microsoft::Graphics::Canvas::CanvasDevice const& device) const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintDocumentFactory>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintDocumentFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Printing::PrintTaskOptions) PrintTaskOptions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) Dpi() const;
        WINRT_IMPL_AUTO(void) Dpi(float value) const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral) GetDeferral() const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::CanvasDrawingSession) CreateDrawingSession() const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintEventArgs>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) CurrentPreviewPageNumber() const;
        WINRT_IMPL_AUTO(void) NewPreviewPageNumber(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) NewPreviewPageNumber() const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Graphics::Canvas::Printing::CanvasPrintDeferral) GetDeferral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::Printing::PrintTaskOptions) PrintTaskOptions() const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Canvas::Printing::ICanvasPrintTaskOptionsChangedEventArgs>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Canvas_Printing_ICanvasPrintTaskOptionsChangedEventArgs<D>;
    };
}
#endif
