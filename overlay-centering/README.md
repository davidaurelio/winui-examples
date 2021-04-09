# Content Dialog Bugs

This demo showcases two bugs with `ContentDialog`:

1. When opening a `ContentDialog` and reducing the height of the window afterwards, the dialog won’t be centered vertically. It is possible to make the dialog disappear completely.
2. When increasing size of the window after opening a dialog, the popup backdrop won’t resize beyond the initial size of the window.
