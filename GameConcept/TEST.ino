int storing[10][2] = {
  {LED0.onOff, PLED0.PonOff},
  {LED1.onOff, PLED1.PonOff},
  {LED2.onOff, PLED2.PonOff},
  {LED3.onOff, PLED3.PonOff},
  {LED4.onOff, PLED4.PonOff},
  {LED5.onOff, PLED5.PonOff},
  {LED6.onOff, PLED6.PonOff},
  {LED7.onOff, PLED7.PonOff},


};

//testing checking data
void Testing() {
  LED0.onOff = 0;
  LED1.onOff = 1;
  LED2.onOff = 0;
  LED3.onOff = 0;
  LED4.onOff = 0;
  LED5.onOff = 1;
  LED6.onOff = 0;
  LED7.onOff = 1;
  LED8.onOff = 1;
  LED9.onOff = 0;

  PLED0.PonOff = 1;
  PLED1.PonOff = 0;
  PLED2.PonOff = 0;
  PLED3.PonOff = 0;
  PLED4.PonOff = 1;
  PLED5.PonOff = 0;
  PLED6.PonOff = 0;
  PLED7.PonOff = 1;
  PLED8.PonOff = 1;
  PLED9.PonOff = 0;

  if (PLED0.PonOff == LED0.onOff) {
    Serial.print("LED one is correct!");
  } else {
    Serial.println("LED one is incorrect!");
  }

  if (PLED1.PonOff == LED1.onOff) {
    Serial.print("LED two is correct!");
  } else {
    Serial.println("LED two is incorrect!");
  }

  if (PLED2.PonOff == LED2.onOff) {
    Serial.print("LED two is correct!");
  } else {
    Serial.println("LED two is incorrect!");
  }

  if (PLED3.PonOff == LED3.onOff) {
    Serial.print("LED three is correct!");
  } else {
    Serial.println("LED three is incorrect!");
  }

  if (PLED4.PonOff == LED4.onOff) {
    Serial.print("LED five is correct!");
  } else {
    Serial.println("LED five is incorrect!");
  }

  if (PLED5.PonOff == LED5.onOff) {
    Serial.print("LED six is correct!");
  } else {
    Serial.println("LED six is incorrect!");
  }

  if (PLED6.PonOff == LED6.onOff) {
    Serial.print("LED seven is correct!");
  } else {
    Serial.println("LED seven is incorrect!");
  }

  if (PLED7.PonOff == LED7.onOff) {
    Serial.print("LED eight is correct!");
  } else {
    Serial.println("LED eight is incorrect!");
  }

  if (PLED8.PonOff == LED8.onOff) {
    Serial.print("LED nine is correct!");
  } else {
    Serial.println("LED nine is incorrect!");
  }

  if (PLED9.PonOff == LED9.onOff) {
    Serial.print("LED ten is correct!");
  } else {
    Serial.println("LED ten is incorrect!");
  }
}