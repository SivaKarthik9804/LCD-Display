#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.clear(); 
  lcd.setCursor(0, 0); 
  lcd.print("Name:ONETWO"); 
  lcd.setCursor(0, 1); 
  lcd.print("Roll:12"); 
  delay(3000); 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Name:THREEFOUR"); 
  lcd.setCursor(0, 1);
  lcd.print("Roll:34"); 
  delay(3000); 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Name:FIVESIX");
  lcd.setCursor(0, 1);
  lcd.print("Roll:56");
  delay(3000); 
}
