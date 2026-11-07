# Row Staggered Split Keyboard - Right Hand

This is the right side of a split keyboard that is intended to help make the split transition as
easy as possible for users used to typing on traditional row-staggered QWERTY
keyboards.

* Keyboard Maintainer: [Stephen Walker-Weinshenker](https://github.com/sww1235)
* Hardware Supported: [Right PCB](https://github.com/sww1235/row_staggered_split_keyboard/tree/main/right-pcb)
* Hardware Availability: [Right PCB](https://github.com/sww1235/row_staggered_split_keyboard/tree/main/right-pcb)

Use the QMK firmware TUI tool to build and flash the keyboard:

```sh
# Setup QMK for the first time
qmk setup

# Validate QMK is functioning

qmk doctor

# Lint configuration files

qmk lint -kb row_staggered_split/right_hand -km default

# Compile keyboard firmware
# Don't have to specify keyboard if already inside its directory

qmk compile -kb row_staggered_split/right_hand -km default

# Flash keyboard configuration
qmk flash -kb row_staggered_split/right_hand -km default


```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools)
and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.
Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader by using the physical reset jumper.
