# Crownlte (aka Note9) twrp device tree

## TWRP's Build

### Download :

Use [Limited manifest for building TWRP](https://github.com/minimal-manifest-twrp/platform_manifest_twrp_omni/tree/twrp-9.0)

Apply [this toybox patch](https://github.com/omnirom/android_bootable_recovery/commit/c32789008db3d4b1bcd269ca5962cb7d9c90c675) to your local twrp directory

And maybe revert [this one](https://github.com/3arthur6/android_kernel_samsung_crownlte/commit/980c79eb1fb30813b0e0b4e9fe4062c529f2b877) if you don't use a recent custom kernel crosscompiler

Clone this repo to device/samsung/crownlte

### Build :

```sh
. build/envsetup.sh
lunch omni_crownlte-eng
make recoveryimage
