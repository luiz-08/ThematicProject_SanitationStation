#include <Wire.h>
#include <Adafruit_MLX90614.h>
#define BLYNK_PRINT Serial
#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
double temp_amb;
double temp_obj;
double calibration = 5.37;
char auth[] = "qyK10VDObjVpZ8u4FFIdb7Xm-l6nIE9Q";
char ssid[] = "Diplomata";
char pass[] = "henrique01";
void setup()
{
 Serial.begin(9600);
 mlx.begin();
 Blynk.begin(auth, ssid, pass);
}
void loop()
{
 Blynk.run();
 temp_amb = mlx.readAmbientTempC();
 temp_obj = mlx.readObjectTempC();
  Blynk.virtualWrite(V1, temp_amb);
 if (temp_obj > 28){
 Blynk.virtualWrite(V2, (temp_obj+calibration));
 }else{
 Blynk.virtualWrite(V2, (temp_obj-temp_obj));
 }
 delay(1000);
}