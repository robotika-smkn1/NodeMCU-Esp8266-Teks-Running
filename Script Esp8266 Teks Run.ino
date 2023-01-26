
/*
 * 
 * All the resources for this project: smkn1kotabekasi.sch.id
 * Modified by Robotika smkn1 kotabekasi
 * 
 * Created by Robotika smkn1 kotabekasi
 * 
 */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>  

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

}

void loop()
{
lcd.begin();

 //CUSTOM HURUF
  lcd.print("@ROBOTIKA SMKN1");
  
  delay (1000);

  lcd.setCursor(0,1);

   //CUSTOM HURUF
  lcd.print("");
  
  delay (1000);
   
 for (int i=0; i<5; i++){
 lcd.noBacklight();
  delay(200);
  lcd.backlight();
  delay(200);}

  lcd.setCursor(0,1);
  
   //CUSTOM HURUF
  lcd.print("OWNER ROBOTIKA");
  
  delay (1000);
  for (int i=0; i<5; i++){
  lcd.noDisplay();
  delay(200);
  lcd.display();
  delay(200);}

  lcd.setCursor(0,1);
  
   //CUSTOM HURUF
  lcd.print("DICKY A. (RPL)");
  
  delay (1000);
  for (int i=0; i<5; i++){
  lcd.cursor();
  delay(500);
  lcd.noCursor();
  delay(500);}

  lcd.setCursor(0,1);
  
   //CUSTOM HURUF
  lcd.print("ARTHA S.A (TKJ)");
  
  delay (1000);
  for (int i=0; i<5; i++){
  lcd.blink();
  delay(500);
  lcd.noBlink();
  delay(500);}

  lcd.setCursor(0,1);
  
   //CUSTOM HURUF
  lcd.print("RAHMAT R. (TKR)");
  
  delay (1000);
  lcd.setCursor(0,0);

  
  //CUSTOM HURUF
  lcd.print("FATHUR F. (TP)");
  
  for (int i=0; i<16; i++){
  lcd.scrollDisplayRight();
  delay(200);}

  for (int i=0; i<16; i++){
  lcd.scrollDisplayLeft();
  delay(200);}

  lcd.setCursor(0,1);
  lcd.print("<- RPL");
  delay (1000);
  lcd.clear();
  lcd.rightToLeft();
  lcd.setCursor(15,0);
  lcd.print("PT -<");
  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("TKJ ->");
  delay (1000);
  lcd.leftToRight();
  lcd.setCursor(0,0);
  lcd.print("TKR ->");
}

