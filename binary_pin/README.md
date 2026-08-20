# binary_pin

4-bit binary counter using Arduino and 4 LEDs.

## How it works

Counts from 0 to 15 in binary. Each LED represents one bit:

| LED | Pin | Bit | Value |
|-----|-----|-----|-------|
| LED1 | D2 | 0 | 1 |
| LED2 | D3 | 1 | 2 |
| LED3 | D4 | 2 | 4 |
| LED4 | D5 | 3 | 8 |

Example: count = 13 = 1101 → LED1 ON, LED2 OFF, LED3 ON, LED4 ON

## Wiring

```
┌──────────────────────────────────────────────┐
│                 ARDUINO UNO                  │
│                                              │
│   D2 ──────────┬── 330Ω ──►|── LED1 ── GND  │
│   D3 ──────────┬── 330Ω ──►|── LED2 ── GND  │
│   D4 ──────────┬── 330Ω ──►|── LED3 ── GND  │
│   D5 ──────────┬── 330Ω ──►|── LED4 ── GND  │
│                │                             │
│   GND ─────────┴───────────── Breadboard GND │
└──────────────────────────────────────────────┘
```

## Components

- 1x Arduino Uno
- 4x LEDs (any color)
- 4x 330Ω resistors (or 3.3kΩ for dimmer)
- Jumper wires
- Breadboard

## Circuit on breadboard

```
Breadboard layout (top view):

  (+) rail ─────────────────────────────── Arduino 5V
  (-) rail ─────────────────────────────── Arduino GND

  Row 10:  D2 ── 330Ω ──►|── LED1 ── (-) rail
  Row 15:  D3 ── 330Ω ──►|── LED2 ── (-) rail
  Row 20:  D4 ── 330Ω ──►|── LED3 ── (-) rail
  Row 25:  D5 ── 330Ω ──►|── LED4 ── (-) rail

  LED anode (long leg) ── toward resistor
  LED cathode (short leg) ── toward GND rail
```

## Upload

```bash
# Install arduino-cli if needed
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh

# Upload
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno binary_pin/
```

## Serial output

Open serial monitor at 9600 baud to see count and binary pattern:

```
0
0000
1
0001
2
0010
...
15
1111
```
