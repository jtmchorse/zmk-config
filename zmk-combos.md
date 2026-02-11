# ZMK Combo & Macro Ideas

A collection of combo and macro ideas gathered from the ergonomic keyboard community.

## Sources
- [Reddit: What's your favorite keymap feature?](https://www.reddit.com/r/ErgoMechKeyboards/comments/zfmfiu/discussion_whats_your_favorite_feature_you/)
- [urob/zmk-config](https://github.com/urob/zmk-config)
- [urob/zmk-helpers](https://github.com/urob/zmk-helpers)
- [Glove80 Glorious Engrammer](https://sunaku.github.io/moergo-glove80-keyboard.html)
- [5x3_3 Keyboard Layout](https://evantravers.com/articles/2023/05/27/5x3-3-keyboard-layout/)
- [ZMK Docs](https://zmk.dev/docs)
- [QMK Practical Macros](https://getreuer.info/posts/keyboards/macros/index.html)
- [ZMK Cheat Sheet](https://peccu.github.io/zmk-cheat-sheet/)
- [Taming Home Row Mods](https://sunaku.github.io/home-row-mods.html)
- [ZMK Smart Toggle (Alt-Tab)](https://github.com/caksoylar/zmk-smart-toggle)
- [ZMK Leader Key Module](https://github.com/urob/zmk-leader-key)
- [ZMK Unicode Module](https://github.com/urob/zmk-unicode)

---

## Navigation & Editing

| Combo | Description | Notes |
|-------|-------------|-------|
| Escape | F+G or J+K (home row) | "Hard to misfire but easy to hit" |
| Tab | D+F or X+C | Common alternative to reach |
| Enter/Return | F+G or thumb | Keep hands on home row |
| Backspace | Thumb or combo | Reduces pinky strain |
| Delete word backward | Ctrl+Backspace (Win) / Opt+Backspace (Mac) | "Most used delete key" |
| Delete word forward | Ctrl+Delete (Win) / Opt+Delete (Mac) | Complement to backward |
| Arrow keys | HJKL on layer | Vim-style navigation |
| Home/End | Layer or combo | Line navigation |
| Page Up/Down | Up+Right / Left+Down | Diagonal combos |

---

## Common Shortcuts (macOS: Cmd, Windows: Ctrl)

| Combo | Keys | Action |
|-------|------|--------|
| Undo | Z+X | Cmd/Ctrl+Z |
| Cut | Z+C | Cmd/Ctrl+X |
| Copy | X+C | Cmd/Ctrl+C |
| Paste | C+V | Cmd/Ctrl+V |
| Select All | A+S | Cmd/Ctrl+A |
| Save | S+D | Cmd/Ctrl+S |
| Find | D+F or combo | Cmd/Ctrl+F |
| Find+Paste | Macro | Cmd+F then Cmd+V |

---

## Programming Symbols

### Bracket Pairs (with cursor inside)
| Combo | Output | Use Case |
|-------|--------|----------|
| Parens | `()` + LEFT | Function calls |
| Brackets | `[]` + LEFT | Array access |
| Braces | `{}` + LEFT | Code blocks |
| Angle brackets | `<>` + LEFT | Generics/templates |
| Single quotes | `''` + LEFT | Strings |
| Double quotes | `""` + LEFT | Strings |
| Backticks | ``` `` ``` + LEFT | Template literals |

### Arrow Operators
| Combo | Output | Languages |
|-------|--------|-----------|
| Fat arrow | `=>` | JS, Perl, Ruby, Elixir |
| Thin arrow | `->` | C, C++, Rust, Elixir |
| Pipe | `\|>` | Elixir, F#, shell |
| Double arrow | `>>` | Haskell, streams |

### Comparison Operators
| Combo | Output | Use Case |
|-------|--------|----------|
| Not equals | `!=` | Inequality |
| Triple equals | `===` | JS strict equality |
| Not triple equals | `!==` | JS strict inequality |
| Greater/equal | `>=` | Comparison |
| Less/equal | `<=` | Comparison |
| Spaceship | `<=>` | Ruby, PHP comparison |

### Assignment Operators
| Combo | Output | Languages |
|-------|--------|-----------|
| Plus equals | `+=` | Most languages |
| Minus equals | `-=` | Most languages |
| Colon equals | `:=` | Go, Pascal |
| Double colon | `::` | Rust, Ruby, C++ |

### Other Symbols
| Combo | Output | Use Case |
|-------|--------|----------|
| Lambda | `\` or `λ` | Haskell, math |
| Comment start | `//` or `/*` | Code comments |
| Comment end | `*/` | Block comments |
| Hash rocket | `#=>` | Ruby output notation |
| Null coalesce | `??` | JS, C# |
| Optional chain | `?.` | JS, Swift |

---

## Text Macros

| Combo | Output | Notes |
|-------|--------|-------|
| `../` | Up directory | "Simple yet highly enjoyable" |
| `the ` | Common word | Most frequent English word |
| `tion` | Suffix | Hold "Th" combo |
| Email address | your@email.com | "2-key chord, use constantly" |
| Phone number | Your number | Quick form filling |

### Pronoun Macros (from phbonachi)
| Combo | Output |
|-------|--------|
| I've | `I've ` |
| you've | `you've ` |
| we've | `we've ` |
| I'd | `I'd ` |
| I'll | `I'll ` |

---

## Caps & Case

| Feature | Description |
|---------|-------------|
| Caps Word | Auto-deactivates after non-alpha. Great for `SNAKE_CASE` |
| Caps Word activation | Double-tap shift, or both shifts together |
| Sentence Case | Auto-capitalize first letter after period |

---

## Layers & Modifiers

| Feature | Description |
|---------|-------------|
| One-shot shift | Tap for next letter capitalized |
| One-shot layer | Tap to activate layer for one keypress |
| Numword | Number layer that auto-deactivates on non-digit |
| Mod-taps on thumbs | Tap=space/enter/backspace, Hold=layer/ctrl |
| Home row mods | ASDF/JKL; as Ctrl/Alt/Shift/Gui when held |

---

## System & App Control

| Combo | Action | Platform |
|-------|--------|----------|
| Screenshot | Capture screen | Cmd+Shift+4 (Mac) |
| Screenshot to clipboard | Capture to clipboard | Cmd+Ctrl+Shift+4 (Mac) |
| App switcher | Alt-Tab / Cmd-Tab | Both |
| Mute (Teams/Zoom) | Cmd+Shift+M | Video calls |
| Lock screen | Ctrl+Cmd+Q (Mac) | Security |

### "Magic" Key / Hyper Key
A single key that sends Ctrl+Alt+Shift+Cmd (or similar). Use with AutoHotkey/Hammerspoon to:
- Switch to specific apps (Hyper+T = Terminal)
- Trigger custom scripts
- Window management

---

## Browser Control

| Combo | Action |
|-------|--------|
| Tab left | Cmd+Shift+[ or Ctrl+Shift+Tab |
| Tab right | Cmd+Shift+] or Ctrl+Tab |
| Close tab | Cmd+W |
| Reopen tab | Cmd+Shift+T |
| Back | Cmd+[ or Alt+Left |
| Forward | Cmd+] or Alt+Right |
| New tab | Cmd+T |
| Address bar | Cmd+L |

---

## Vim-Specific

| Combo | Action |
|-------|--------|
| `^` | Jump to line start |
| `$` | Jump to line end |
| `#` | Search word backward |
| `*` | Search word forward |
| `%` | Jump to matching bracket |
| `ciw` | Change inner word (macro) |
| `yiw` | Yank inner word (macro) |

---

## Hardware/Firmware

| Combo | Action |
|-------|--------|
| Bootloader | Enter flash mode |
| Reset | Soft reset keyboard |
| Bluetooth clear | Clear all BT profiles |
| BT profile 1-5 | Switch BT device |
| USB/BT toggle | Switch output mode |

---

## Currently Implemented in This Repo

### Combos
- Escape (J+K)
- Return (F+G)
- Tab (D+F)
- Delete word backward (,+.)
- Delete word forward (.+/)
- Undo (Z+X)
- Copy (X+C)
- Paste (C+V)
- Select All (A+S)
- Save (S+D)
- Up directory `../` (U+I)
- Parens pair `()` (U+J vertical)
- Bracket pair `[]` (I+K vertical)
- Brace pair `{}` (O+L vertical)
- Fat arrow `=>` (L+;)
- Thin arrow `->` (;+')
- Pipe `|>` (K+L)
- Not equals `!=` (7+8)
- Triple equals `===` (8+9)
- Caps Word (both shifts)
- "the " (T+G)
- Screenshot (1+2)
- Studio unlock (top corners)
- Browser tabs (thumb combos)

---

## 50 Awesome Examples People Actually Use

### Text Entry & Shortcuts (1-10)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 1 | **Email macro** | Single combo types your full email address | Reddit |
| 2 | **Phone number macro** | Types phone number for form filling | Reddit |
| 3 | **Select word** | Ctrl+Right, Ctrl+Shift+Left to select current word | getreuer |
| 4 | **Select line** | Home, Shift+End to select current line | getreuer |
| 5 | **Join lines** | Deletes newline, joins with next line (like Vim's J) | getreuer |
| 6 | **Web search selection** | Copy selection, open new tab, paste, search | getreuer |
| 7 | **Next sentence** | Types ". " then one-shot shift for auto-capitalize | getreuer |
| 8 | **Double-click macro** | Sends two mouse clicks with proper timing | getreuer |
| 9 | **Address macro** | Types your full mailing address | Reddit |
| 10 | **Signature macro** | Types email signature block | Reddit |

### Programming Macros (11-20)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 11 | **console.log()** | Types `console.log()` with cursor inside parens | Community |
| 12 | **Arrow function** | Types `() => {}` with cursor positioned | Glove80 |
| 13 | **If block** | Types `if () {}` with cursor in condition | Community |
| 14 | **For loop** | Types `for () {}` skeleton | Community |
| 15 | **Try-catch** | Types try/catch block skeleton | Community |
| 16 | **Import statement** | Types `import {} from ''` | Community |
| 17 | **Return statement** | Types `return ` | Community |
| 18 | **Function keyword** | Types `function ` | Community |
| 19 | **Const declaration** | Types `const ` | Community |
| 20 | **Comment block** | Types `/* */` with cursor inside | Community |

### Smart Behaviors (21-30)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 21 | **Caps Word** | Auto-caps until non-alpha; great for SNAKE_CASE | ZMK docs |
| 22 | **Numword** | Number layer auto-deactivates on non-digit | urob |
| 23 | **Smart Shift** | Tap=sticky shift, Hold=shift, Double=caps word | urob |
| 24 | **Key Repeat** | Tap after alpha=repeat last key (reduces SFUs) | urob |
| 25 | **Swapper (Alt-Tab)** | First press=Alt+Tab, subsequent=Tab, release=done | caksoylar |
| 26 | **Mod-Morph Grave/Esc** | Tap=Esc, Shift+Tap=` (backtick) | ZMK docs |
| 27 | **Sticky Layer** | Tap to activate layer for next keypress only | ZMK docs |
| 28 | **Layer Lock** | Hold=momentary layer, Double-tap=lock layer | urob |
| 29 | **Smart Mouse** | Mouse layer auto-deactivates on non-mouse keys | urob |
| 30 | **Autoshift** | Hold any key slightly longer for shifted version | keymap-editor |

### Tap Dance Tricks (31-35)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 31 | **Space/Period dance** | Double-tap space = ". " (mobile keyboard style) | ZMK docs |
| 32 | **Shift/Caps dance** | Tap=shift, Double-tap=caps lock | ZMK docs |
| 33 | **Screenshot dance** | Tap=clipboard, Double-tap=save to desktop | 5x3_3 layout |
| 34 | **Play/Next dance** | Tap=play/pause, Double-tap=next track | 5x3_3 layout |
| 35 | **Email dance** | Triple-tap E = types email address | QMK tap dance |

### Leader Key Sequences (36-40)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 36 | **Greek letters** | Leader → α, β, γ, π for math/science | urob/zmk-leader-key |
| 37 | **German umlauts** | Leader → ä, ö, ü, ß | urob/zmk-unicode |
| 38 | **Emoji sequences** | Leader → 👍, ✅, ❌ | Community |
| 39 | **Git commands** | Leader+g+s = `git status`, +g+p = `git push` | Community |
| 40 | **System commands** | Leader+b+t = Bluetooth toggle | urob |

### Window & App Management (41-45)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 41 | **Hyper+App switching** | Hyper+T=Terminal, Hyper+B=Browser, etc. | Reddit |
| 42 | **Window half left** | Rectangle/Magnet shortcut | Community |
| 43 | **Window half right** | Rectangle/Magnet shortcut | Community |
| 44 | **Window maximize** | Fill screen shortcut | Community |
| 45 | **Mission Control** | Ctrl+Up or F3 on Mac | Community |

### Advanced Combos (46-50)

| # | Feature | Description | Source |
|---|---------|-------------|--------|
| 46 | **Digraph combos** | T+H=Th, S+H=Sh, C+H=Ch as single motion | phbonachi |
| 47 | **Held combo extends** | Tap "Th"=th, Hold "Th"=tion | phbonachi |
| 48 | **Conditional layers** | Lower+Raise held together = Adjust layer | ZMK docs |
| 49 | **Positional hold-tap** | Same-hand rolls always tap, cross-hand can hold | urob |
| 50 | **Combo + require-prior-idle** | Prevents combo misfires during fast typing | urob |

---

## ZMK Code Examples

### Swapper (Alt-Tab) - using zmk-smart-toggle module
```c
swapper: swapper {
    compatible = "zmk,behavior-smart-toggle";
    #binding-cells = <0>;
    bindings = <&kp LALT>, <&kp TAB>;
    ignored-key-positions = <1>;  // positions that don't release Alt
};
```

### Numword Behavior
```c
num_word: num_word {
    compatible = "zmk,behavior-caps-word";
    #binding-cells = <0>;
    layers = <NUM>;  // your number layer
    continue-list = <BSPC DEL DOT COMMA PLUS MINUS STAR FSLH EQUAL>;
};
```

### Select Word Macro (Mac)
```c
sel_word: sel_word {
    compatible = "zmk,behavior-macro";
    #binding-cells = <0>;
    bindings = <&kp LA(RIGHT) &kp LA(LS(LEFT))>;
};
```

### Select Line Macro (Mac)
```c
sel_line: sel_line {
    compatible = "zmk,behavior-macro";
    #binding-cells = <0>;
    bindings = <&kp LG(LEFT) &kp LG(LS(RIGHT))>;
};
```

### Tap Dance: Space/Period
```c
td_space: td_space {
    compatible = "zmk,behavior-tap-dance";
    #binding-cells = <0>;
    tapping-term-ms = <200>;
    bindings = <&kp SPACE>, <&dot_space>;  // dot_space is a macro: ". "
};
```

### Conditional Tri-Layer
```c
conditional_layers {
    compatible = "zmk,conditional-layers";
    tri_layer {
        if-layers = <LOWER RAISE>;
        then-layer = <ADJUST>;
    };
};
```

### Mod-Morph: Shift changes output
```c
arrow_morph: arrow_morph {
    compatible = "zmk,behavior-mod-morph";
    #binding-cells = <0>;
    bindings = <&thin_arrow>, <&fat_arrow>;  // -> normally, => with shift
    mods = <(MOD_LSFT|MOD_RSFT)>;
};
```

### Home Row Mods with require-prior-idle
```c
hm: homerow_mod {
    compatible = "zmk,behavior-hold-tap";
    #binding-cells = <2>;
    tapping-term-ms = <280>;
    quick-tap-ms = <175>;
    require-prior-idle-ms = <150>;
    flavor = "balanced";
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <...>;  // opposite hand positions
};
```

---

## Ideas Still to Explore

- [ ] Mouse keys for trackball-less navigation
- [ ] RGB layer indication (color changes per layer)
- [ ] MIDI chord macros for music production
- [ ] Stenography/chording for speed typing
- [ ] Autocorrect for common typos
- [ ] Dynamic macros (record/playback)
- [ ] Pointing device input processors (slow mode, scroll mode)
