#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int del = 500;
byte thaa[8] = {B01111,
                B01010,
                B01010,
                B11111,
                B10011,
                B11111,
                B00111,
                B00100};
byte mii[8] = {B10000,
               B10000,
               B10011,
               B10010,
               B10111,
               B10111,
               B10101,
               B11111};
byte zh[8] ={B10010,
             B10000,
             B10111,
             B10111,
             B11111,
             B00100,
             B00111,
             B01111};
byte smalhrt[8] = {B00000,
                  B00000,
                  B01010,
                  B11111,
                  B11111,
                  B11111,
                  B01110,
                  B00100};
byte bighrt[8] = {B00000,
                  B00000,
                  B00000,
                  B01010,
                  B11111,
                  B01110,
                  B00100,
                  B00000};
  
void setup()
{
  lcd.begin(16, 2); 
  lcd.createChar(0,thaa);
  lcd.createChar(1,mii);
  lcd.createChar(2,zh);
  lcd.createChar(3,smalhrt);
  lcd.createChar(4,bighrt);
}
void loop() 
{
   lcd.setCursor(6, 0);
   lcd.write(byte(0));
   lcd.write(byte(1));
   lcd.write(byte(2));
   lcd.write(byte(3));
   delay(del);
   lcd.setCursor(9,0);
   lcd.write(byte(4));
   delay(del);
   lcd.setCursor(9,0);
   
 }
