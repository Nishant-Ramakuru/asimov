#include <Servo.h>

#include<SoftwareSerial.h>

int trig1=40;
int echo1=41;
int trig2=42;
int echo2=43;
int trig3=50;
int echo3=51;
int trig4=52;
int echo4=53;

int distance1,distance2,distance3,distance4;
int duration1,duration2,duration3,duration4; 

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
  servo1.attach(35);
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

  servo8.attach(28);
  servo16.attach(25);
  servo24.attach(9);

  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig3, OUTPUT);
  pinMode(echo3, INPUT);
  pinMode(trig4, OUTPUT);
  pinMode(echo4, INPUT);  
  // put your setup code here, to run once:

}

void loop() 
{
  digitalWrite(trig1, LOW);   // set the trigger pin to LOW
    //delay(1000);         // delay 2 microseconds
    digitalWrite(trig1, HIGH);  // set the trigger pin to HIGH and send out a sound signal
    //delay(1000);       // delay 100 microseconds
    digitalWrite(trig1, LOW);
    duration1 = pulseIn(echo1, HIGH);
    distance1=duration1/58; 
Serial.print(distance1);

 digitalWrite(trig2, LOW);   // set the trigger pin to LOW
    //delay(1000);         // delay 2 microseconds
    digitalWrite(trig2, HIGH);  // set the trigger pin to HIGH and send out a sound signal
    //delay(1000);       // delay 100 microseconds
    digitalWrite(trig2, LOW);
    duration2 = pulseIn(echo2, HIGH);
    distance2=duration2/58; 
Serial.print(distance2);

       digitalWrite(trig3, LOW);   // set the trigger pin to LOW
    //delay(1000) ;        // delay 2 microseconds
    digitalWrite(trig3, HIGH);  // set the trigger pin to HIGH and send out a sound signal
    //delay(1000);       // delay 100 microseconds
    digitalWrite(trig3, LOW);
    duration3 = pulseIn(echo3, HIGH);
    distance3=duration3/58; 

Serial.print(distance3);
    digitalWrite(trig4, LOW);   // set the trigger pin to LOW
    //delay(1000);         // delay 2 microseconds
    digitalWrite(trig4, HIGH);  // set the trigger pin to HIGH and send out a sound signal
    //delay(1000);       // delay 100 microseconds
    digitalWrite(trig4, LOW);
    duration4 = pulseIn(echo4, HIGH);
    distance4=duration4/58; 
Serial.print(distance4);


  
  
  //*********************initilize all servos to their origins****************************
  servo1.write(50);
  servo2.write(30);
  servo3.write(40);
  servo4.write(10);
  servo5.write(70);
  servo6.write(40);
  servo7.write(50);
  servo8.write(50);
  servo9.write(70);
  servo10.write(65);
  servo11.write(80);
  servo12.write(80);
  servo13.write(75);
  servo14.write(60);
  servo15.write(60);
  servo16.write(80);
  servo17.write(80);
  servo18.write(80);
  servo19.write(80);
  servo20.write(50);
  servo21.write(80);
  servo22.write(80);
  servo23.write(80);
  servo24.write(70); 

  if (distance2>15)
  {
  //********************************* forward ********************************************* 
  delay(500);
  servo9.write(50);
  //delay(100);
  servo11.write(60);
  //delay(100);
  servo14.write(40);
  //delay(100);
  servo16.write(60);
  delay(100);
  
  servo17.write(60);
  //delay(100);
  servo19.write(50);
  //delay(100);
  servo22.write(110);
  //delay(100);
  servo24.write(90);
  delay(100);
  
  servo9.write(70);
  //delay(100);
  servo11.write(80);
  //delay(100);
  servo14.write(60);
  //delay(100);
  servo16.write(80);
  delay(100);

  servo10.write(45);
  //delay(100);
  servo12.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo15.write(40);
  delay(100);
  
  servo18.write(60);
  //delay(100);
  servo20.write(20);
  //delay(100);
  servo21.write(110);
  //delay(100);
  servo23.write(110);
  delay(100);
  /*servo10.write(65);
  //delay(100);
  servo12.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo15.write(60);
  delay(100);
*/
  /*servo9.write(50);
  //delay(100);
  servo11.write(60);
  //delay(100);
  servo14.write(40);
  //delay(100);
  servo16.write(60);
  delay(100);
  */
  servo17.write(80);
  //delay(100);
  servo19.write(80);
  //delay(100);
  servo22.write(80);
  //delay(100);
  servo24.write(70);
  delay(100);
  /*servo9.write(70);
  //delay(100);
  servo11.write(80);
  //delay(100);
  servo14.write(60);
  //delay(100);
  servo16.write(80);
  delay(100);
*/
  /*servo10.write(45);
  //delay(100);
  servo12.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo15.write(40);
  delay(100);
  */
  servo10.write(65);
  //delay(100);
  servo12.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo15.write(60);
  delay(100);

  servo9.write(50);
  //delay(100);
  servo11.write(60);
  //delay(100);
  servo14.write(40);
  //delay(100);
  servo16.write(60);
  delay(100);
  
  servo18.write(80);
  //delay(100);
  servo20.write(50);
  //delay(100);
  servo21.write(80);
  //delay(100);
  servo23.write(80);
  delay(100);
  /*servo10.write(65);
  //delay(100);
  servo12.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo15.write(60);
  delay(100);
*/
  servo9.write(70);
  //delay(100);
  servo11.write(80);
  //delay(100);
  servo14.write(60);
  //delay(100);
  servo16.write(80);
  delay(100);
 delay(2000); 
}
 // delay(2000);
 else if (distance1>15)
  { 
//******************************************left******************************

  servo11.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo16.write(60);
  //delay(100);
  servo10.write(45);
  delay(100);
  
  servo19.write(60);
  //delay(100);
  servo21.write(50);
  //delay(100);
  servo24.write(110);
  //delay(100);
  servo18.write(100);
  delay(100);
  
  servo11.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo16.write(80);
  //delay(100);
  servo10.write(65);
  delay(100);


  servo12.write(60);
  //delay(100);
  servo14.write(40);
  //delay(100);
  servo15.write(40);
  //delay(100);
  servo9.write(50);
  delay(100);
  
  servo20.write(20);
  //delay(100);
  servo22.write(50);
  //delay(100);
  servo23.write(110);
  //delay(100);
  servo17.write(110);
  delay(100);
  
  servo19.write(80);
  //delay(100);
  servo21.write(80);
  //delay(100);
  servo24.write(80);
  //delay(100);
  servo18.write(80);
  delay(100);
  
  servo12.write(80);
  //delay(100);
  servo14.write(60);
  //delay(100);
  servo15.write(60);
  //delay(100);
  servo9.write(70);
  delay(100);  

  servo11.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo16.write(60);
  //delay(100);
  servo10.write(45);
  delay(100);

  servo20.write(20);
  //delay(100);
  servo22.write(50);
  //delay(100);
  servo23.write(110);
  //delay(100);
  servo17.write(110);
  delay(100);

  servo11.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo16.write(80);
  //delay(100);
  servo10.write(65);
  delay(100);
  delay(2000);}


   else if (distance4>15)
  {
  //********************************* backward *********************************************

  servo12.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo15.write(40);
  //delay(100);
  servo10.write(45);
  delay(100);
  servo20.write(70);
  //delay(100);
  servo21.write(60);
  //delay(100);
  servo23.write(50);
  //delay(100);
  servo18.write(110);
  delay(100);
  servo12.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo15.write(60);
  //delay(100);
  servo10.write(65);
  delay(100);
  
  servo14.write(40);
  //delay(100);
  servo16.write(60);
  //delay(100);
  servo9.write(50);
  //delay(100);
  servo11.write(60);
  delay(100);
  servo22.write(50);
  //delay(100);
  servo24.write(50);
  //delay(100);
  servo17.write(110);
  //delay(100);
  servo19.write(110);
  delay(100);

  servo20.write(50);
  //delay(100);
  servo21.write(80);
  //delay(100);
  servo23.write(80);
  //delay(100);
  servo18.write(80);
  delay(100);

  
  servo14.write(60);
  //delay(100);
  servo16.write(80);
  //delay(100);
  servo9.write(70);
  //delay(100);
  servo11.write(80);
  delay(100);

  
  servo12.write(60);
  //delay(100);
  servo13.write(55);
  //delay(100);
  servo15.write(40);
  //delay(100);
  servo10.write(45);
  delay(100);

  servo22.write(80);
  //delay(100);
  servo24.write(80);
  //delay(100);
  servo17.write(80);
  //delay(100);
  servo19.write(80);
  delay(100);

  servo12.write(80);
  //delay(100);
  servo13.write(75);
  //delay(100);
  servo15.write(60);
  //delay(100);
  servo10.write(65);
  delay(100);
  
  //delay(2000);
  
  delay(2000);
  }
  else if (distance3>15)
  {

  //***************************************************************right*************************************************

  servo14.write(40);
  //delay(100);
  servo15.write(40);
  //delay(100);
  servo9.write(50);
  //delay(100);
  servo12.write(60);
  delay(100);
  
  servo22.write(100);
  //delay(100);
  servo23.write(60);
  //delay(100);
  servo17.write(50);
  //delay(100);
  servo20.write(80);
  delay(100);
  
  servo14.write(60);
  //delay(100);
  servo15.write(60);
  //delay(100);
  servo9.write(70);
  //delay(100);
  servo12.write(80);
  delay(100);

  servo16.write(60);
  //delay(100);
  servo10.write(45);
  //delay(100);
  servo11.write(60);
  //delay(100);
  servo13.write(55);
  delay(100);
  
  servo24.write(50);
  //delay(100);
  servo18.write(50);
  //delay(100);
  servo19.write(110);
  //delay(100);
  servo21.write(110);
  delay(100);

  
  
  servo22.write(80);
  //delay(100);
  servo23.write(80);
  //delay(100);
  servo17.write(80);
  //delay(100);
  servo20.write(50);
  delay(100);
  
  servo16.write(80);
  //delay(100);
  servo10.write(65);
  //delay(100);
  servo11.write(80);
  //delay(100);
  servo13.write(75);
  delay(100);

  servo14.write(40);
  //delay(100);
  servo15.write(40);
  //delay(100);
  servo9.write(50);
  //delay(100);
  servo12.write(60);
  delay(100);

  
 
  servo24.write(80);
  //delay(100);
  servo18.write(80);
  //delay(100);
  servo19.write(80);
  //delay(100);
  servo21.write(80);
  delay(100);

  servo14.write(60);
  //delay(100);
  servo15.write(60);
  //delay(100);
  servo9.write(70);
  //delay(100);
  servo12.write(80);
  delay(100);
  delay(2000);
  }  

 //delay(2000);
}
