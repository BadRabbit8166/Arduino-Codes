#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
lcd.begin(16, 2);
}
void loop() 
{
lcd.setCursor(3,0);
lcd.print("Felix Beer");
lcd.setCursor(3,1);
lcd.print("02295-2213");
}
