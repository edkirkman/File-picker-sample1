﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class TextBlock;
                ref class Button;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            ref class VisualState;
        }
    }
}

namespace SDKSample
{
    namespace FilePicker
    {
        partial ref class Scenario4 : public ::Windows::UI::Xaml::Controls::Page, 
            public ::Windows::UI::Xaml::Markup::IComponentConnector
        {
        public:
            void InitializeComponent();
            virtual void Connect(int connectionId, ::Platform::Object^ target);
        
        private:
            bool _contentLoaded;
        
            private: ::Windows::UI::Xaml::Controls::Grid^ LayoutRoot;
            private: ::Windows::UI::Xaml::Controls::Grid^ Input;
            private: ::Windows::UI::Xaml::Controls::Grid^ Output;
            private: ::Windows::UI::Xaml::Controls::TextBlock^ OutputTextBlock;
            private: ::Windows::UI::Xaml::Controls::Button^ SaveFileButton;
            private: ::Windows::UI::Xaml::VisualState^ DefaultLayout;
            private: ::Windows::UI::Xaml::VisualState^ Below768Layout;
        };
    }
}

