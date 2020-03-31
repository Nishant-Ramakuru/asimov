#include <Servo.h>
 
Servo servo1;
Servo servo2;
Servo servo3;  
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;
Servo servo11;
Servo servo13;
Servo servo12;
Servo servo14;
Servo servo15;
Servo servo16;
Servo servo17;
Servo servo18;
Servo servo19;
Servo servo20;
Servo servo21;
Servo servo22;
Servo servo23;
Servo servo24;

void setup()
{
  Serial.begin(9600);  
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);
  servo9.attach(10);
  servo10.attach(11);
  servo11.attach(12);
  servo12.attach(13);
  servo13.attach(22);
  servo14.attach(23);
  servo15.attach(24);
  servo16.attach(27);
  servo17.attach(28);
  servo18.attach(29);
  servo19.attach(30);
  servo20.attach(31);
  servo21.attach(32);
  servo22.attach(33);
  servo23.attach(34);
  servo24.attach(40);
  delay(2000);
}
 
 
void loop()
{
  //initialize the startup by setting the servo origin
  //2nd level
  servo9.write(40);
  delay(1000);
  servo9.write(60);
  /*servo10.write(20);
  servo11.write(20);
  servo12.write(20);
  servo13.write(20);
  servo14.write(20);
  servo15.write(20);
  servo16.write(20);
  //1st level*/
  servo1.write(60);
  delay(1000);
  servo1.write(30);
  delay(1000);
  servo2.write(60);
  delay(1000);
  servo2.write(30);
  delay(1000);
  servo3.write(60);
  delay(1000);
  servo3.write(30);
  delay(1000);
  servo4.write(30);
  delay(1000);
  servo4.write(60);
  delay(1000);
  servo5.write(30);
  delay(1000);
  servo5.write(60);
  delay(1000);
  servo6.write(60);
  delay(1000);
  servo6.write(30);
  delay(1000);
  servo7.write(30);
  delay(1000);
  servo7.write(60);
  delay(1000);
  servo8.write(30);
  delay(1000);
  servo8.write(60);
  delay(1000);
  //3rd level
  /*servo17.write(60);
  delay(1000);
  servo17.write(40);
  servo18.write(60);
  servo19.write(60);
  servo20.write(60);
  servo21.write(60);
  servo22.write(60);
  servo23.write(60);
  servo24.write(60);*/
  //initialization complete

 
  /*delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  servo9.write(20);
  delay(1000);
  servo10.write(40);
  delay(1000);
  servo11.write(60);
  delay(1000);
  */ 
  
   
   
}

