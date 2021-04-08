#pragma once

#include "HelloPage.g.h"

namespace winrt::xaml_island::implementation {
struct HelloPage : HelloPageT<HelloPage> {
  HelloPage();
};
}  // namespace winrt::xaml_island::implementation

namespace winrt::xaml_island::factory_implementation {
struct HelloPage : HelloPageT<HelloPage, implementation::HelloPage> {};
}  // namespace winrt::xaml_island::factory_implementation
