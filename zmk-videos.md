# ZMK & Keyboard Customization Videos

A curated list of YouTube videos covering ZMK firmware, combos, layers, macros, and ergonomic keyboard customization.

> **Note:** Timestamps marked with `[TODO]` need to be filled in manually by watching the video.

---

## Essential Videos

### 1. Dreams of Code - Home Row Mods
**URL:** https://www.youtube.com/watch?v=sLWQ4Gx88h4
**Channel:** Dreams of Code
**Topics:** Home row mods setup for QMK, ZMK, and Kanata

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Introduction to home row mods | See: [zmk-combos.md > Layers & Modifiers](#layers--modifiers) |
| [TODO] | QMK implementation | |
| [TODO] | ZMK implementation | See: [zmk-combos.md > Home Row Mods](#50-awesome-examples) |
| [TODO] | Kanata for laptops | |
| [TODO] | Timing configuration | See: `require-prior-idle-ms` in combos doc |

**Related repo:** https://github.com/dreamsofcode-io/home-row-mods

---

### 2. Joe Scotto - ZMK Firmware Setup
**URL:** https://www.youtube.com/watch?v=O_urj-rF3bQ
**Channel:** Joe Scotto
**Topics:** ZMK basics, GitHub Actions build, flashing

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | ZMK overview | |
| [TODO] | GitHub Actions setup | Similar to our build workflow |
| [TODO] | Flashing firmware | See: `flash-left` / `flash-right` in .zshrc |
| [TODO] | Keymap configuration | |

---

### 3. Zephyr Tech Talk #010 - Building Open Keyboards with ZMK
**URL:** Search "Zephyr Tech Talk ZMK" on YouTube
**Speakers:** Peter Johanson (ZMK creator), Benjamin Cabé
**Topics:** ZMK architecture, Zephyr RTOS, wireless keyboards

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | ZMK project history | |
| [TODO] | Zephyr RTOS benefits | |
| [TODO] | Wireless/Bluetooth design | |
| [TODO] | Future roadmap | |

**Source:** https://zephyrproject.org/building-open-keyboards-with-zmk-zephyr/

---

### 4. Ben Vallack - 34-Key Layout Journey
**URL:** https://www.youtube.com/watch?v=8wZ8FRwOzhU
**Channel:** Ben Vallack
**Topics:** Minimal keyboards, layers, one-shot keys, combos

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Why go minimal | |
| [TODO] | Layer system design | See: [zmk-combos.md > Layers & Modifiers](#layers--modifiers) |
| [TODO] | One-shot sticky layers | See: [zmk-combos.md > Sticky Layer](#smart-behaviors-21-30) |
| [TODO] | Combo usage | See: All our implemented combos |
| [TODO] | Home row mods on minimal boards | |

**His layouts:** https://benvallack.com/notebook/36-key-corne-keyboard-layout/

---

### 5. Ben Vallack - The Piano (18-Key Keyboard)
**URL:** Search "Ben Vallack Piano keyboard" on YouTube
**Channel:** Ben Vallack
**Topics:** Ultra-minimal layouts, extreme layer usage

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | 18-key philosophy | |
| [TODO] | Alpha layer switching | See: [zmk-combos.md > One-shot layer](#layers--modifiers) |
| [TODO] | Modifier combos | |
| [TODO] | Making it practical | |

---

## Keyboard Build Videos

### 6. Christian Selig - The Caldera Build
**URL:** Search "Christian Selig Caldera keyboard" on YouTube
**Topics:** Custom wireless split keyboard design, ZMK

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Design process | |
| [TODO] | ZMK configuration | |
| [TODO] | Wireless split setup | Similar to our Lily58 setup |

**Blog post:** https://christianselig.com/2024/07/caldera-keyboard/

---

### 7. Tinker & Hack - PSKeeb 5
**URL:** Search "Tinker Hack PSKeeb" on YouTube
**Topics:** Wireless split, trackpoint, ZMK, knobs

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Hardware overview | |
| [TODO] | ZMK firmware setup | |
| [TODO] | Trackpoint integration | |
| [TODO] | Portable case design | |

---

## Configuration & Features Videos

### 8. MechMerlin - Firmware Setup Guides
**URL:** Search "MechMerlin QMK" or "MechMerlin firmware" on YouTube
**Channel:** MechMerlin
**Topics:** QMK/firmware basics (concepts apply to ZMK)

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Firmware concepts | |
| [TODO] | Keymap structure | |
| [TODO] | Layer design | See: [zmk-combos.md > Layers & Modifiers](#layers--modifiers) |

---

### 9. Dygma - Programmable Keyboard Playlist
**URL:** Search "Dygma Raise tutorial" on YouTube
**Channel:** Dygma
**Topics:** Layers, macros, dual-function keys (Bazecor concepts apply broadly)

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Layer concepts | |
| [TODO] | Dual-function keys | See: [zmk-combos.md > Mod-taps](#layers--modifiers) |
| [TODO] | Macro creation | See: [zmk-combos.md > Text Macros](#text-macros) |
| [TODO] | Superkeys | Similar to tap-dance |

**Note:** Dygma has 250+ videos on keyboard customization

---

### 10. ZSA - Oryx & Moonlander Tutorials
**URL:** Search "ZSA Moonlander Oryx" on YouTube
**Channel:** ZSA Keyboards
**Topics:** Oryx configurator, layers, tap-dance, combos

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Oryx overview | |
| [TODO] | Layer setup | See: [zmk-combos.md > Layers](#layers--modifiers) |
| [TODO] | Tap-dance | See: [zmk-combos.md > Tap Dance Tricks](#tap-dance-tricks-31-35) |
| [TODO] | Hyper/Meh keys | See: [zmk-combos.md > Magic Key](#system--app-control) |

**Oryx configurator:** https://configure.zsa.io/

---

### 11. Thomas Baart - QMK Basics Series
**URL:** Search "Thomas Baart QMK" on YouTube
**Blog:** https://thomasbaart.nl/category/mechanical-keyboards/firmware/qmk/
**Topics:** Tap dance, leader keys, combos (QMK but concepts apply)

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | Tap dance basics | See: [zmk-combos.md > Tap Dance Tricks](#tap-dance-tricks-31-35) |
| [TODO] | Leader key | See: [zmk-combos.md > Leader Key Sequences](#leader-key-sequences-36-40) |
| [TODO] | Mod-tap | See: [zmk-combos.md > Home row mods](#layers--modifiers) |

---

### 12. sunaku - Glove80 Deep Dive
**URL:** Search "sunaku Glove80" or check his website
**Blog:** https://sunaku.github.io/moergo-glove80-keyboard.html
**Topics:** Symbol layer design, arrow operators, programming macros

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| N/A (blog) | Symbol layer philosophy | See: [zmk-combos.md > Programming Symbols](#programming-symbols) |
| N/A | Inward-rolling pairs | See: Our bracket pair combos |
| N/A | Arrow operators | See: `=>`, `->`, `\|>` in our keymap |

---

## Community & Discussion Videos

### 13. Keyboard Builders' Digest - Community Spotlights
**URL:** https://kbd.news/
**Topics:** Community builds, innovative layouts, ZMK configs

Covers topics like:
- urob's ZMK nodefree config
- Community keyboard builds
- Layout innovations

---

### 14. ErgoMechKeyboards Reddit Discussions (Video Companions)
**Source:** r/ErgoMechKeyboards
**Topics:** Real user experiences with combos, macros, layouts

Key threads to check:
- "What's your favorite keymap feature?" - See: [zmk-combos.md source](#sources)
- Home row mods experiences
- Combo vs layer debates

---

### 15. splitkb.com - Aurora Series Videos
**URL:** Search "splitkb Aurora" on YouTube
**Topics:** Split keyboard builds, nice!nano, ZMK setup

| Timestamp | Topic | Cross-reference |
|-----------|-------|-----------------|
| [TODO] | nice!nano setup | Same controller as our Lily58 |
| [TODO] | ZMK configuration | |
| [TODO] | Wireless pairing | |

---

## Cross-Reference Index

### By Feature

| Feature | Videos | zmk-combos.md Section |
|---------|--------|----------------------|
| Home Row Mods | #1, #4, #8, #11 | Layers & Modifiers |
| Combos | #1, #4, #10, #11 | All combo sections |
| Tap Dance | #10, #11 | Tap Dance Tricks |
| Layers | #4, #5, #9, #10 | Layers & Modifiers |
| Macros | #9, #12 | Text Macros, Programming Macros |
| Leader Keys | #11 | Leader Key Sequences |
| Caps Word | #1 | Caps & Case |
| One-shot | #4, #5 | Layers & Modifiers |
| ZMK Setup | #2, #3, #6 | (Build workflow) |

### By Keyboard

| Keyboard | Videos |
|----------|--------|
| Lily58 (ours) | #2, #15 |
| Corne | #4, #7 |
| Glove80 | #1, #3, #12 |
| Ferris Sweep | #4 |
| Moonlander | #10 |
| Custom | #5, #6, #7 |

---

## How to Use This List

1. **Start with #1 (Dreams of Code)** - Best intro to home row mods
2. **Watch #4 (Ben Vallack)** - Great combo/layer philosophy
3. **Reference #12 (sunaku blog)** - Programming symbol inspiration
4. **Check #2 (Joe Scotto)** - If you need ZMK basics refresher

### Fill in Timestamps

When watching, note timestamps for:
- Key concepts that match our zmk-combos.md
- Configuration tips
- Troubleshooting advice
- Creative ideas to try

---

## To Add Later

- [ ] Actual timestamps after watching each video
- [ ] Additional videos as discovered
- [ ] Screenshots of relevant configurations
- [ ] Links to referenced configs/repos
