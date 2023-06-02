#include <Adafruit_CircuitPlayground.h>


int j = 0;

int LEDcall;

volatile int LEDord = 0;

struct {
  int LEDnum;
  int onOff;
  int orderLED;
} LED0, LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9;

//tesing function
struct {
  int PLEDnum;
  int PonOff;
  int PorderLED;
} PLED0, PLED1, PLED2, PLED3, PLED4, PLED5, PLED6, PLED7, PLED8, PLED9;



void setup() {
  CircuitPlayground.begin();

  LED0.LEDnum = 0;
  LED1.LEDnum = 1;
  LED2.LEDnum = 2;
  LED3.LEDnum = 3;
  LED4.LEDnum = 4;
  LED5.LEDnum = 5;
  LED6.LEDnum = 6;
  LED7.LEDnum = 7;
  LED8.LEDnum = 8;
  LED9.LEDnum = 9;

  PLED0.PLEDnum = 0;
  PLED1.PLEDnum = 1;
  PLED2.PLEDnum = 2;
  PLED3.PLEDnum = 3;
  PLED4.PLEDnum = 4;
  PLED5.PLEDnum = 5;
  PLED6.PLEDnum = 6;
  PLED7.PLEDnum = 7;
  PLED8.PLEDnum = 8;
  PLED9.PLEDnum = 9;
}

void loop() {

  //RanDOMLed(3);

  //Display();

  Testing();

  delay(2000);

  reSET();
}

//resets structure and all important things
void reSET() {
  LEDord = 0;

  LED0.onOff = 0;
  LED1.onOff = 0;
  LED2.onOff = 0;
  LED3.onOff = 0;
  LED4.onOff = 0;
  LED5.onOff = 0;
  LED6.onOff = 0;
  LED7.onOff = 0;
  LED8.onOff = 0;
  LED9.onOff = 0;

  LED0.orderLED = 0;
  LED1.orderLED = 0;
  LED2.orderLED = 0;
  LED3.orderLED = 0;
  LED4.orderLED = 0;
  LED5.orderLED = 0;
  LED6.orderLED = 0;
  LED7.orderLED = 0;
  LED8.orderLED = 0;
  LED9.orderLED = 0;
}

//Creates a randomized pattern aswell as order of pattern
void RanDOMLed(int num) {
  for (int i = 0; i < num; i++) {

    LEDcall = random(10);
    Serial.print("RAN Number: ");
    Serial.println(LEDcall);

    LEDord += 1;

    if (LEDcall == 0) {
      LED0.onOff = 1;
      LED0.orderLED = LEDord;
    }
    if (LEDcall == 1) {
      LED1.onOff = 1;
      LED1.orderLED = LEDord;
    }
    if (LEDcall == 2) {
      LED2.onOff = 1;
      LED2.orderLED = LEDord;
    }
    if (LEDcall == 3) {
      LED3.onOff = 1;
      LED3.orderLED = LEDord;
    }
    if (LEDcall == 4) {
      LED4.onOff = 1;
      LED4.orderLED = LEDord;
    }
    if (LEDcall == 5) {
      LED5.onOff = 1;
      LED5.orderLED = LEDord;
    }
    if (LEDcall == 6) {
      LED6.onOff = 1;
      LED6.orderLED = LEDord;
    }
    if (LEDcall == 7) {
      LED7.onOff = 1;
      LED7.orderLED = LEDord;
    }
    if (LEDcall == 8) {
      LED8.onOff = 1;
      LED8.orderLED = LEDord;
    }
    if (LEDcall == 9) {
      LED9.onOff = 1;
      LED9.orderLED = LEDord;
    }
  }
}

void Display() {
  Serial.print("LED 0: ");
  Serial.print(LED0.onOff);
  Serial.print(", Order: ");
  Serial.println(LED0.orderLED);

  Serial.print("LED 1: ");
  Serial.print(LED1.onOff);
  Serial.print(", Order: ");
  Serial.println(LED1.orderLED);

  Serial.print("LED 2: ");
  Serial.print(LED2.onOff);
  Serial.print(", Order: ");
  Serial.println(LED2.orderLED);

  Serial.print("LED 3: ");
  Serial.print(LED3.onOff);
  Serial.print(", Order: ");
  Serial.println(LED3.orderLED);

  Serial.print("LED 4: ");
  Serial.print(LED4.onOff);
  Serial.print(", Order: ");
  Serial.println(LED4.orderLED);

  Serial.print("LED 5: ");
  Serial.print(LED5.onOff);
  Serial.print(", Order: ");
  Serial.println(LED5.orderLED);

  Serial.print("LED 6: ");
  Serial.print(LED6.onOff);
  Serial.print(", Order: ");
  Serial.println(LED6.orderLED);

  Serial.print("LED 7: ");
  Serial.print(LED7.onOff);
  Serial.print(", Order: ");
  Serial.println(LED7.orderLED);

  Serial.print("LED 8: ");
  Serial.print(LED8.onOff);
  Serial.print(", Order: ");
  Serial.println(LED8.orderLED);

  Serial.print("LED 9: ");
  Serial.print(LED9.onOff);
  Serial.print(", Order: ");
  Serial.println(LED9.orderLED);
}
