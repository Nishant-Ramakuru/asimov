#include <Servo.h>
 
Servo servo1;

void setup() 
{
  Serial.begin(9600);  
  servo1.attach(2);
  
  // put your setup code here, to run once:

}

void loop() 
{
  servo1.write(0);
  delay(500);
  servo1.write(90);
  delay(500);
  servo1.write(100);
  delay(500);
  //servo1.write(40);
  delay(500);
  /*servo1.write(30);
  delay(500);
  servo1.write(60);
  // put your main code here, to run repeatedly:
*/
}
