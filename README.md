# Crownlte (aka Note9) twrp device tree

## TWRP's Build

### Download :

Use [Limited manifest for building TWRP](https://github.com/minimal-manifest-twrp/platform_manifest_twrp_omni/tree/twrp-9.0)

Clone this repo to device/samsung/crownlte

### To build :

```sh
. build/envsetup.sh
lunch omni_crownlte-eng
make recoveryimage
