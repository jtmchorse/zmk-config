# zmk-config

ZMK firmware config for Lily58.

![Keymap](lily58_keymap.svg)

## Rebuild keymap image

```sh
uvx --from keymap-drawer keymap parse -z config/lily58.keymap > lily58_keymap.yaml
uvx --from keymap-drawer keymap draw lily58_keymap.yaml > lily58_keymap.svg
```
