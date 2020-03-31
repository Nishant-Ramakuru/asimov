#include <Servo.h>
 
Servo servo1;
Servo servo17;
Servo servo9;

Servo servo2;
Servo servo18;
Servo servo10;

Servo servo3;
Servo servo19;
Servo servo11;

Servo servo4;
Servo servo20;
Servo servo12;

Servo servo5;
Servo servo21;
Servo servo13;

Servo servo6;
Servo servo22;
Servo servo14;

Servo servo7;
Servo servo23;
Servo servo15;

Servo servo8;
Servo servo24;
Servo servo16;


void setup() 
{
  
  Serial.begin(9600);  
  servo1.attach(28);
  servo9.attach(10);
  servo17.attach(2);

  servo2.attach(29);
  servo10.attach(11);
  servo18.attach(3);

  servo3.attach(30);
  servo11.attach(12);
  servo19.attach(4);

  servo4.attach(31);
  servo12.attach(13);
  servo20.attach(5);

  servo5.attach(32);
  servo13.attach(22);
  servo21.attach(6);

  servo6.attach(33);
  servo14.attach(23);
  servo22.attach(7);

  servo7.attach(34);
  servo15.attach(24);
  servo23.attach(8);

  servo8.attach(40);
  servo16.attach(25);
  servo24.attach(9);
  
  
}

void loop() 
{
  //first leg
  servo17.write(30);
  delay(500);
  servo17.write(60);
  delay(500);
  servo17.write(40);
  delay(500);
  servo9.write(10);
  delay(500);
  servo9.write(30);
  delay(500);
  servo9.write(20);
  delay(500);
  servo1.write(40);
  delay(500);
  servo1.write(60);
  delay(500);
  servo1.write(80);
  delay(500);
  //second leg
  servo18.write(30);
  delay(500);
  servo18.write(90);
  delay(500);
  servo18.write(60);
  delay(500);
  servo10.write(10);
  delay(500);
  servo10.write(30);
  delay(500);
  servo10.write(20);
  delay(500);
  servo2.write(40);
  delay(500);
  servo2.write(60);
  delay(500);
  servo2.write(80);
  delay(500);
  //***********************************third leg*************************************
  servo19.write(30);
  delay(500);
  servo19.write(60);
  delay(500);
  servo19.write(40);
  delay(500);
  servo11.write(10);
  delay(500);
  servo11.write(30);
  delay(500);
  servo11.write(20);
  delay(500);
  servo3.write(40);
  delay(500);
  servo3.write(60);
  delay(500);
  servo3.write(80);
  delay(500);
 //*************************************fourth leg**********************************
  servo20.write(30);
  delay(500);
  servo20.write(60);
  delay(500);
  servo20.write(40);
  delay(500);
  servo12.write(10);
  delay(500);
  servo12.write(30);
  delay(500);
  servo12.write(20);
  delay(500);
  servo4.write(40);
  delay(500);
  servo4.write(60);
  delay(500);
  servo4.write(80);
  delay(500);
  //*************************************fifth leg***********************************
  servo21.write(30);
  delay(500);
  servo21.write(60);
  delay(500);
  servo21.write(40);
  delay(500);
  servo13.write(10);
  delay(500);
  servo13.write(30);
  delay(500);
  servo13.write(20);
  delay(500);
  servo5.write(40);
  delay(500);
  servo5.write(60);
  delay(500);
  servo5.write(80);
  delay(500);
  //****************************************sixth leg***********************************
  servo22.write(30);
  delay(500);
  servo22.write(60);
  delay(500);
  servo22.write(40);
  delay(500);
  servo14.write(10);
  delay(500);
  servo14.write(30);
  delay(500);
  servo14.write(20);
  delay(500);
  servo6.write(40);
  delay(500);
  servo6.write(60);
  delay(500);
  servo6.write(80);
  delay(500);
  //*****************************************seventh leg********************************
  servo23.write(30);
  delay(500);
  servo23.write(60);
  delay(500);
  servo23.write(40);
  delay(500);
  servo15.write(10);
  delay(500);
  servo15.write(30);
  delay(500);
  servo15.write(20);
  delay(500);
  servo7.write(40);
  delay(500);
  servo7.write(60);
  delay(500);
  servo7.write(80);
  delay(500);
  //*******************************************eighth leg*******************************
  servo24.write(30);
  delay(500);
  servo24.write(60);
  delay(500);
  servo24.write(40);
  delay(500);
  servo16.write(10);
  delay(500);
  servo16.write(30);
  delay(500);
  servo16.write(20);
  delay(500);
  servo8.write(40);
  delay(500);
  servo8.write(60);
  delay(500);
  servo8.write(80);
  delay(500);

 
        
  
}
