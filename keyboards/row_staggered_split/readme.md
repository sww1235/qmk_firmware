# Row Staggered Split Keyboard

The Row Staggered Split keyboard is for typists who need to maintain their muscle memory
of standard ANSI layout 104 key keyboards, but also would like a split keyboard.

This keyboard consists of 4 large components that are completely independant but augment each other:

- Left hand keyboard
- Right hand keyboard
- Navigation cluster
- Numpad

All components of the keyboard have independant KB2040 controllers and so do
not use the split keyboard functionality in QMK.

The PCB files for the keyboard components are located at <https://github.com/sww1235/row_staggered_split_keyboard>.

All keyboard components have per key RGB LED matrix lighting.

## Left Hand Keyboard

This is the left side of a standard ANSI 104 key layout keyboard, including the
`B` key. The `ESC` key and `F1`-`F4` are in their usual locations, and
`F5`-`F10` are in an additional row to the left of the `Tab`/`Shift`/`Caps
Lock` keys.

A `FN` key is included in the bottom right to provide alternate functionality
such as media keys, etc which are currently unimplemented. The `FN` layout
currently only has one additional key defined which is the `EE_CLR` key. This
is needed to clear the keyboards EEPROM, primarily for changing the RGB LED
lighting effects.

See the keyboard layouts shown below for more details.

## Right Hand Keyboard

This is the right side of a standard ANSI 104 key layout keyboard, including
the `B` key. As the left hand side has `F1`-`F10`, the function keys on the top
row start at `F11` and continue to `F16`, with `F17` available on the bottom
right.

A `FN` key is included in the bottom left to provide alternate functionality
such as media keys, etc which are currently unimplemented. The `FN` layout
currently only has one additional key defined which is the `EE_CLR` key. This
is needed to clear the keyboards EEPROM, primarily for changing the RGB LED
lighting effects.

See the keyboard layouts shown below for more details.

## Navigation Cluster

This keyboard PCB is currently under developement, with PCB and key layout not finalized.

This section is the navigation cluster of standard ANSI 104 key layout
keyboards, including the `INSERT`, `DELETE`, `HOME`, `END`, `PAGE UP` and `PAGE
DOWN` keys, and the arrow cluster. 

To increase the number of function keys available, a 4th column has been added
with `F21`-`F24`, as well as the empty row between the `DELETE`/`END`/`PAGE
DOWN` keys and the arrow cluster has been filled in with `F18`-`F20`. There are
also 3 unassigned keys in the layout currently as seen in the layout images.

This section is essentially a 5 row x 4 column macro pad.

## Numpad

This keyboard PCB is currently under developement, with PCB and key layout not finalized.

This is a standard numpad layout, with some minor tweaks to the layout of the
nav cluster (numlock off) layer, and the addition of a `00` key.
