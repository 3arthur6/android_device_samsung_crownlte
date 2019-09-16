# Crownlte (aka Note9) twrp device tree

## TWRP's Build

### Download :

Use [minimal-repo-manifest](https://github.com/minimal-manifest-twrp/platform_manifest_twrp_omni/tree/twrp-9.0)

Clone this repo to device/samsung/crownlte

### To build :

```sh
. build/envsetup.sh
lunch Note9-eng
make recoveryimage
