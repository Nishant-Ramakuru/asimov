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
  //*********************initilize all servos to their origins****************************
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  servo7.write(0);
  servo8.write(0);
  servo9.write(100);
  servo10.write(100);
  servo11.write(100);
  servo12.write(100);
  servo13.write(100);
  servo14.write(100);
  servo15.write(100);
  servo16.write(100);
  servo17.write(100);
  servo18.write(0);
  servo19.write(0);
  servo20.write(0);
  servo21.write(0);
  servo22.write(0);
  servo23.write(0);
  servo24.write(0); 

  //********************************* forward ********************************************* 
  
  //servo9.write(55);
  /*delay(500);
  servo10.write(10);
  delay(500);
  servo16.write(65);
  delay(500);
  servo18.write(100);
  delay(500);
  servo24.write(60);
  delay(500);
  servo10.write(55);
  delay(500);
  servo16.write(45);
  delay(500);
  servo9.write(55);
  delay(500);
  servo18.write(80);
  delay(500);
  servo24.write(40);
  delay(500);
  servo11.write(220);
  delay(500);
  servo15.write(60);
  delay(500);
  servo19.write(95);
  delay(500);
  servo23.write(80);
  delay(500);
  servo11.write(200);
  delay(500);
  servo15.write(40);
  delay(500);
  */
}
