// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_ExampleGalleryDesktop_Direct3DInterop_H
#define WINRT_ExampleGalleryDesktop_Direct3DInterop_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210806.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210806.1"
#include "winrt/impl/ExampleGalleryDesktop_Direct3DInterop.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_ExampleGalleryDesktop_Direct3DInterop_IClass<D>::MyProperty() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::ExampleGalleryDesktop_Direct3DInterop::IClass)->get_MyProperty(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_ExampleGalleryDesktop_Direct3DInterop_IClass<D>::MyProperty(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::ExampleGalleryDesktop_Direct3DInterop::IClass)->put_MyProperty(value));
    }
    template <typename D>
    struct produce<D, winrt::ExampleGalleryDesktop_Direct3DInterop::IClass> : produce_base<D, winrt::ExampleGalleryDesktop_Direct3DInterop::IClass>
    {
        int32_t __stdcall get_MyProperty(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MyProperty(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MyProperty(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::ExampleGalleryDesktop_Direct3DInterop
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::ExampleGalleryDesktop_Direct3DInterop::IClass> : winrt::impl::hash_base {};
    template<> struct hash<winrt::ExampleGalleryDesktop_Direct3DInterop::Class> : winrt::impl::hash_base {};
#endif
}
#endif
