#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
#include "melodien.h"
#include "MUSIKPLAYER.h"

#include "Devices.h"
#include "LED.h"
#include "BUTTON.h"
#include "FAN.h"
#include "GENERICSENSOR.h"
#include "MSENSOR.h"
#include <Servo.h>
//0x27

//todo: relay + Buzzer



Button buttonA(BUTTON_A);
Button buttonB(BUTTON_B);
Servo servo1;
Servo servo2;
SoftwareSerial btSerial(10, 11); // HM-10 RX, TX
LiquidCrystal_I2C lcd (0x27,16,2);
//Lampe relay1(RELAY);
Lampe LedGelb(LED_GELB);
Lampe LedWeiss(LED_WEISS);
Fan Fan1(FAN1, FAN2);
MSensor mSensor(MOTION);
GenericSensor lSensor(LICHT);
GenericSensor StSensor(STEAM);
GenericSensor GSensor(GAS);
GenericSensor SoSensor(SOIL);


//------------------------------------------------------------------------------------

/* void setup() {
  buttonA.begin();
  buttonB.begin();
  Fan1.begin();
} */

/* 
void loop() {

  if (mSensor.getMove()) 
     {// Less than 900, the LED lights up
       LedGelb.on();
     } 
     else 
     {// Otherwise,LED light is off
       LedGelb.off();
     }
     delay (1);
    } */

  // put your main code here, to run repeatedly:
  /* if (buttonA.isPressed()) {
    ledWeiss.on();
    player.setFullNote(1000);
    player.playMelody(WAS_WOLLEN_WIR_TRINKEN);   // blockiert!
    ledWeiss.off();
  } */

  
  /*
Keyestudio smart home Kit for Arduino
Project 14
Bluetooth
http://www.keyestudio.com
*/
char val;
void setup()
{
	Serial.begin(9600); // Serial monitor baud rate
	buttonA.begin();
	buttonB.begin();
	LedGelb.begin();
	LedWeiss.begin();
	Fan1.begin();
	lcd.init (); // initialize the lcd
    lcd.backlight ();
	servo2.attach(SERVO2);
	
}

void loop()
{
	if (StSensor.getValue()>900) {
		servo2.write(100);
	}
	else{
		servo2.write(180);
	}
    lcd.setCursor (3,0);
    lcd.print (StSensor.getValue()); // LED print hello, world!
}