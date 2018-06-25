#include <Adafruit_NeoPixel.h>

int neoPin = A0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, neoPin, NEO_GRB + NEO_KHZ800);

int r = 0;
int g = 200;
int b = 100;

void setup() {
  Serial.begin(9600); 
  Serial.println("s");
}

void loop() {
  while (Serial.available() == 0);
  b = Serial.parseInt(); //read int or parseFloat for ..float...
  Serial.println(g);
    
  strip.begin();
  for(int i = 0; i < 12; i++){
          strip.setPixelColor(i, r, g, b);
   }
    
  strip.show();
 
}
