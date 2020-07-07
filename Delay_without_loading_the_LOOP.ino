/*
  Delay without halting the LOOP. The bult in LED will flash depending
   on the blink routine  you choose inside the loop.

  Created 7 July 2020
  By: Carlou Torres
*/

int BuiltInLED = 2;
long unsigned del100 = 100;    // 100 millisecond delay
long unsigned del500 = 500;    // 500 millisecond delay
long unsigned del1000 = 1000;  // 1000 millisecond delay
long unsigned gv_Millis;
long unsigned gv_PreviousMillis;
long unsigned gv_ElapseTime;

void setup() {
  Serial.begin(9600);                                               // Do not delete or comment this
  pinMode(BuiltInLED, OUTPUT);
  gv_PreviousMillis = millis();
}

void loop() {
  gv_Millis = millis();
  gv_ElapseTime = gv_Millis - gv_PreviousMillis;
  blink1000();
}

// 1000 millisecond delay
void blink1000() {
  Serial.print("gv_ElapseTime = "); Serial.println(gv_ElapseTime);   // Do not delete or comment this
  if ( (gv_ElapseTime == 0) || (gv_ElapseTime < (del1000 - 500) ) ) {
    digitalWrite(BuiltInLED, HIGH);
  } else if ( (gv_ElapseTime > 500) && (gv_ElapseTime < del1000) ) {
    digitalWrite(BuiltInLED, LOW);
  } else {
    gv_PreviousMillis = millis();
  }
}

// 500 millisecond delay
void blink500() {
  Serial.print("gv_ElapseTime = "); Serial.println(gv_ElapseTime);   // Do not delete or comment this
  if ( (gv_ElapseTime == 0) || (gv_ElapseTime < (del500 - 250) ) ) {
    digitalWrite(BuiltInLED, HIGH);
  } else if ( (gv_ElapseTime > 250) && (gv_ElapseTime < del500) ) {
    digitalWrite(BuiltInLED, LOW);
  } else {
    gv_PreviousMillis = millis();
  }
}

// 100 millisecond delay
void blink100() {
  Serial.print("gv_ElapseTime = "); Serial.println(gv_ElapseTime);   // Do not delete or comment this
  if ( (gv_ElapseTime == 0) || (gv_ElapseTime < (del100 - 50) ) ) {
    digitalWrite(BuiltInLED, HIGH);
  } else if ( (gv_ElapseTime > 50) && (gv_ElapseTime < del100) ) {
    digitalWrite(BuiltInLED, LOW);
  } else {
    gv_PreviousMillis = millis();
  }
}
