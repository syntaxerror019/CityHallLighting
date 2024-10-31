#include <FastLED.h>

#define NUM_LEDS 48 // 12 led's per strip attachment
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::White;
    FastLED.show();
    delay(35);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(35);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(35);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(35);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Brown;
    FastLED.show();
    delay(35);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}
