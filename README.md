

# :pushpin: NodeMCU-Esp8266-Teks-Running



<p align="center">
  <img src="https://i.postimg.cc/tRZw0xQ4/logo-removebg-preview.png" alt="robotika smkn1 kotabekasi logo"/ style="height:350px;" "width: 350px;">
</p>


[![Version](https://img.shields.io/badge/VENOM-1.0.17-brightgreen.svg?maxAge=259200)]()
[![Stage](https://img.shields.io/badge/Release-Stable-brightgreen.svg)]()
![licence](https://img.shields.io/badge/license-GPLv3-brightgreen.svg)
[![Arduino Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-alpine.svg?left_text=Alpine%20Linux%20Build)](##Link##)
[![Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-kali.svg?left_text=Kali%20Linux%20Build)](##Link##)
[![Armel Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-armel.svg?left_text=Armel%20Kali%20Linux%20Build)](##Link##)
[![Armhf Kali Linux Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-armhf.svg?left_text=Armhf%20Kali%20Linux%20Build)](##Link##)
[![DragonFly BSD Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-dfly.svg?left_text=DragonFly%20Build)](##Link##)
[![FreeBSD 11 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-fbsd-11.svg?left_text=FreeBSD%2011%20Build)](##Link##)
[![FreeBSD 12 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-fbsd-12.svg?left_text=FreeBSD%2012%20Build)](##Link##)
[![OpenBSD 6 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-obsd.svg?left_text=OpenBSD%20Build)](##Link##)
[![NetBSD 8.1 Build Status](https://buildbot.aircrack-ng.org/badges/aircrack-ng-netbsd81.svg?left_text=NetBSD%20Build)](##Link##)
[![Coverity Scan Build Status](https://scan.coverity.com/projects/aircrack-ng/badge.svg)](##Link##)



## :inbox_tray: Media Social Instagram

To keep this collection up-to-date need contributors who can add more Program Arduino scripts
||
|--------------|
|:mailbox_with_mail: [artha_sa_](https://www.instagram.com/artha_sa_/)
|:mailbox_with_mail: [dicky_asqaelani26](https://www.instagram.com/dicky_asqaelani26/)
|:mailbox_with_mail: [rahmatnurraya](https://www.instagram.com/rahmatnurraya990/)
|:mailbox_with_mail: [applepi_fthur](https://www.instagram.com/applepi_fthur/)
|:mailbox_with_mail: [robotika-smkn1](https://www.instagram.com/robotika.smkn1kotabekasi/)


# :moneybag: [Donate](https://saweria.co/arthasyarif)

# :briefcase: Barang & Bahan
- Arduino Uno
- Lcd I2c
- I2c Module
- Kabel Male & Female


# :mag: Ilustrasi Arduino

<p align="center">
  <img src="https://i.postimg.cc/L6wGQLL4/68747470733a2f2f692e706f7374696d672e63632f726d3050564c42532f44485431312d44616e2d4c43442d69322d432d62.png" style="height:205px;" "width:205px;"/>
</p>

# :inbox_tray: Download [ Libary ](https://drive.google.com/file/d/1__jesSJj6Ys0w4yy6LwjO2kineDm8PtT/view?usp=share_link) 

# :clipboard: Source Code

```bash

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


```

