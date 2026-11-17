# Theremin

An embedded theremin built from scratch on a Raspberry Pi Pico 2 W.

## How it works (plan)

A theremin's pitch changes as your hand approaches an antenna: your hand adds
capacitance to an oscillator, which shifts its frequency. The plan is to:

1. Build an analog oscillator whose frequency depends on hand distance.
2. Measure that frequency on the Pico using a PWM slice as an edge counter.
3. Map the measured frequency to an audio pitch.
4. Generate the audio output.

Progress notes are in [`docs/build-log.md`](docs/build-log.md).

## Repository layout

```
CMakeLists.txt         build configuration (Pico SDK)
pico_sdk_import.cmake  locates the Pico SDK
src/main.c             firmware entry point
docs/build-log.md      dated progress notes
```
