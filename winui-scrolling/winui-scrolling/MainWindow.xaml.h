#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainWindow.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::winui_scrolling::implementation {
struct MainWindow : MainWindowT<MainWindow> {
  MainWindow();
};
}  // namespace winrt::winui_scrolling::implementation

namespace winrt::winui_scrolling::factory_implementation {
struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow> {};
}  // namespace winrt::winui_scrolling::factory_implementation
