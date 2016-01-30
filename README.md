Quick Reboot
============

Today i introduce you to a basic but usefull 3DS Homebrew: Quick Reboot!
With this app you can quickly reboot your 3DS! It also has a security check:
if this app gets booted with the L button held, it doesn't reboot.
This is usefull if you opened Quick Reboot App by accident...

This version is a fork from [AlbertoSonic/3DS_QuickReboot][upstream], including
support for ctrulib 1.x and a simpler build system based only on Makefiles.

How to install
==============

You can install this app in many ways. As a Gateway's `.3ds` file, as a `.cia`
file or as `.3dsx` and `smdh` files (for ninjhax)!

Or you can just build it your self! Download all this repo to you computer and
run the included `Makefile`. You will need [devkitPRO][devkit] installed to
build this project.

Credits
=======

- Original version by [AlbertoSonic][upstream].
- Buildtools by [Steveice10][buildtools].
- File icon.png by [Dakirby309][icon].

[upstream]: https://github.com/AlbertoSONIC/3DS_Quick_Reboot
[devkit]: http://sourceforge.net/projects/devkitpro/files/devkitARM/
[buildtools]: https://github.com/Steveice10/buildtools
[icon]: https://www.iconfinder.com/icons/81752/power_restart_icon
