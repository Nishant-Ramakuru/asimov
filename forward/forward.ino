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
  
  // put your setup code here, to run once:

}


void loop() 
{
  servo1.write(50);
  servo2.write(50);
  servo3.write(40);
  servo4.write(50);
  servo5.write(50);
  servo6.write(50);
  servo7.write(40);
  servo8.write(50);
  servo9.write(80);
  servo10.write(80);
  servo11.write(80);
  servo12.write(80);
  servo13.write(80);
  servo14.write(60);
  servo15.write(60);
  servo16.write(80);
  servo17.write(80);
  servo18.write(80);
  servo19.write(80);
  servo20.write(80);
  servo21.write(80);
  servo22.write(80);
  servo23.write(80);
  servo24.write(80);
  //*********************************************
  //first set up
  /*servo9.write(50);
  servo11.write(50);
  servo16.write(50);
  servo14.write(30);
  delay(1000);
  //first set side
  servo17.write(40);
  servo19.write(40);
  servo24.write(120);
  servo22.write(120);
  delay(1000);
  //first set down
  servo9.write(80);
  servo11.write(80);
  servo16.write(80);
  servo14.write(80);
  delay(1000);
  //second set up
  servo10.write(50);
  servo12.write(50);
  servo15.write(50);
  servo13.write(50);
  delay(1000);
  //second set side
  servo18.write(40);
  servo20.write(40);
  servo21.write(120);
  servo23.write(120);
  delay(1000);
  //first set push
  /*servo17.write(120);
  servo19.write(120);
  servo24.write(40);
  servo22.write(40);
  delay(1000);
  
  servo10.write(80);
  servo12.write(80);
  servo15.write(80);
  servo13.write(80);
  delay(1000);
  //
  servo18.write(120);
  servo20.write(120);
  servo21.write(40);
  servo23.write(40);
  delay(1000);*/
  }
