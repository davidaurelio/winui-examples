#include "pch.h"

#include "HelloPage.xaml.h"
#if __has_include("HelloPage.g.cpp")
#include "HelloPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::xaml_island::implementation {
HelloPage::HelloPage() {
  InitializeComponent();
}
}  // namespace winrt::xaml_island::implementation
