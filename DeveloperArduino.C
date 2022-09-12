#include <Servo.h>
int sensor = 14;
int sensor1 = 15;
int sensor2 = 16;
int motor = 21;//base
int motor2 = 18; //altura invertida
int motor3 = 20;//altura
int motor4 = 19;//alcool
int DCpin = 3;
Servo servo1, servo2, servo3, servo4;
void setup()
{
pinMode(sensor, INPUT);
pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(DCpin , OUTPUT);
servo1.attach(motor);
servo2.attach(motor2);
servo3.attach(motor3);
servo4.attach(motor4);
servo1.write(0);
servo2.write(0);
servo3.write(45);
servo4.write(20);
}
void loop()
{
digitalWrite (DCpin , HIGH)
if(digitalRead(sensor)== LOW) {
delay(1250);
servo1.write(0);
delay (2000);
servo2.write(35);
servo3.write(15);
delay (2000);
servo4.write(0);
delay (1000);
digitalWrite (DCpin , LOW);
delay(2000);
digitalWrite (DCpin , HIGH);
delay(5000);
servo1.write(0);
delay (1000);
servo2.write(0);
servo3.write(35);
delay (1000);
servo4.write(20); }
else {}
if (digitalRead( sensor1)==LOW)
{
delay(1250);
servo1.write(90);
delay (2000);
servo2.write(35);
servo3.write (15);
delay (1000);
servo4.write (0);
delay (1000);
digitalWrite (DCpin , LOW);
delay (2000);
digitalWrite (DCpin , HIGH);
delay (5000);
servo2.write(0);
servo3.write(45);
delay (1000);
servo1.write(0);
delay (1000);
servo4.write(20); }
else {}
if (digitalRead ( sensor2)==LOW) {
delay(1250);
servo1.write(180);
delay (2000);
servo2.write(35);
servo3.write(15);
delay (2000);
servo4.write (0);
delay (1000);
digitalWrite (DCpin , LOW);
delay (2000);
digitalWrite (DCpin , HIGH);
delay (5000);
servo2.write(0);
servo3.write(45);
delay (1000);
servo1.write(0);
delay (1000);
servo4.write(20);
}
else
{
}
}