﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "Scenario1_SingleFile.xaml.h"




void ::SDKSample::FilePicker::Scenario1::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///Scenario1_SingleFile.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///Scenario1_SingleFile.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the Grid named 'LayoutRoot'
    LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"LayoutRoot"));
    // Get the Grid named 'Input'
    Input = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Input"));
    // Get the Grid named 'Output'
    Output = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Output"));
    // Get the TextBlock named 'OutputTextBlock'
    OutputTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"OutputTextBlock"));
    // Get the Button named 'PickAFileButton'
    PickAFileButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"PickAFileButton"));
    // Get the VisualState named 'DefaultLayout'
    DefaultLayout = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"DefaultLayout"));
    // Get the VisualState named 'Below768Layout'
    Below768Layout = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Below768Layout"));
}

void ::SDKSample::FilePicker::Scenario1::Connect(int connectionId, Platform::Object^ target)
{
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

