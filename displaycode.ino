#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust the address as needed

void setup() {
 lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);  // Set cursor to column 0, row 0 (first line)
  lcd.print("Happy");
  lcd.setCursor(0, 1);  // Set cursor to column 0, row 1 (second line)
  lcd.print("Diwali");
}

void loop() {
  // Do nothing here
}
