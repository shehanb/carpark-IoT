#include "U8glib.h"
int w;
int sensorPin = A0;
int sensorPin1 = A1;
int sensorPin2 = A2;
int sensorPin3 = A3;
int sensorPin4 = A4;
int sensorPin5 = A5;
int sensorPin6 = A6;
int sensorPin7 = A7;
int sensorPin8 = A8;
int sensorPin9 = A9;
int sensorPin10 = A10;
U8GLIB_ST7920_128X64 u8g(13, 11, 10, U8G_PIN_NONE);


void setup(void) {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(void) {
  u8g.setFont(u8g_font_u8glib_4);
  u8g.setFontRefHeightExtendedText();
  u8g.setFontPosTop();

  w = u8g.getStrWidth("A1");

  if (analogRead(sensorPin) < 600 && analogRead(sensorPin1) < 600 && analogRead(sensorPin2) < 600 && analogRead(sensorPin3) < 600 && analogRead(sensorPin4) < 600 && analogRead(sensorPin5) < 600 && analogRead(sensorPin6) < 600 && analogRead(sensorPin7) < 600 && analogRead(sensorPin8) < 600 && analogRead(sensorPin9) < 600 && analogRead(sensorPin10) < 600)
  { digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  else {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
  }
  u8g.firstPage();
  do {
    if (analogRead(sensorPin) > 600) {
      u8g.drawStr(3 + 50, 50, "A1");
      u8g.drawFrame(3 - 2 + 50, 50, w + 3, 12) ;
    }
    if (analogRead(sensorPin1) > 600) {
      u8g.drawStr(w + 5 + 50, 50, "A2");
      u8g.drawFrame(w + 5 - 2 + 50, 50, w + 4, 12) ;
    }
    if (analogRead(sensorPin2) > 600) {
      u8g.drawStr(w + 16 + 50, 50, "A3");
      u8g.drawFrame(w + 16 - 2 + 50, 50, w + 4, 12) ;
    }
    if (analogRead(sensorPin3) > 600) {
      u8g.drawStr(w + 27 + 50, 50, "A4");
      u8g.drawFrame(w + 27 - 2 + 50, 50, w + 4, 12) ;
    }
    if (analogRead(sensorPin4) > 600) {
      u8g.drawStr(3 + 10, 1, "B4");
      u8g.drawFrame(3 - 2 + 10, 1, w + 4, 12) ;
    }
    if (analogRead(sensorPin5) > 600) {
      u8g.drawStr(w + 6 + 10, 1, "B3");
      u8g.drawFrame(w + 6 - 2 + 10, 1, w + 4, 12) ;
    }
    if (analogRead(sensorPin6) > 600) {
      u8g.drawStr(w + 17 + 10, 1, "B2");
      u8g.drawFrame(w + 17 - 2 + 10, 1, w + 4, 12) ;
    }
    if (analogRead(sensorPin7) > 600) {
      u8g.drawStr(w + 28 + 10, 1, "B1");
      u8g.drawFrame(w + 28 - 2 + 10, 1, w + 4, 12) ;
    }
    if (analogRead(sensorPin8) > 600) {
      u8g.drawStr(3 + 35, 28, "C1");
      u8g.drawFrame(3 - 2 + 35, 28, w + 4, 12) ;
    }
    if (analogRead(sensorPin9) > 600) {
      u8g.drawStr(w + 6 + 35, 28, "C2");
      u8g.drawFrame(w + 6 - 2 + 35, 28, w + 4, 12) ;
    }
    if (analogRead(sensorPin10) > 600) {
      u8g.drawStr(3 + 100, 28, "D1");
      u8g.drawFrame(3 - 2 + 100, 28, w + 4, 12) ;
    }
    if (analogRead(sensorPin) < 600 && analogRead(sensorPin1) < 600 && analogRead(sensorPin2) < 600 && analogRead(sensorPin3) < 600 && analogRead(sensorPin4) < 600 && analogRead(sensorPin5) < 600 && analogRead(sensorPin6) < 600 && analogRead(sensorPin7) < 600 && analogRead(sensorPin8) < 600 && analogRead(sensorPin9) < 600 && analogRead(sensorPin10) < 600)
    { u8g.drawStr(3, 28, "CAR PARK FULL!");
    }
  } while ( u8g.nextPage() );
  delay(50);
}

