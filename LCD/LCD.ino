#include<LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
// set up the LCD's number of columns and rows:
lcd.begin(16, 2);
Serial.begin(9600);
lcd.setCursor(0, 0);
lcd.print("05050130");
delay(1000);
lcd.setCursor(0, 1);
lcd.print("Chao,CHI-HSAING");
delay(1000);
lcd.clear();
}

void loop() {
// when characters arrive over the serial port...
if (Serial.available()) {
// wait a bit for the entire message to arrive
delay(100);
// clear the screen
lcd.clear();
// read all the available characters
while (Serial.available() > 0) {
// display each character to the LCD
lcd.write(Serial.read());
}
}
}
