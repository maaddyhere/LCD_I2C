#include <LiquidCrystal_I2C_STEM.h>
LiquidCrystal_I2C_STEM lcd(0x27, 16, 2);
void setup()
{
    lcd.init();
    lcd.backlight();
}
void loop()
{
    lcd.setCursor(0,0);
    lcd.print("Hello");
    lcd.setCursor(0,1);
    lcd.print("World");
}