
#include<DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define CONTROL_SIGNAL 5 
#define TEMPERATURE_THRESHOLD 25
#define DHT11_PIN 12
void setup(){

Serial.begin(115200);
}

void loop(){

if (DHT.temperature >= TEMPERATURE THRESHOLD) { digitalWrite(CONTROL_SIGNAL, HIGH); // Turn on SIGNAL

}else {

digitalWrite(CONTROL_SIGNAL, LOW); // Turn off SIGNAL
}

DHT read (DHT11 PIN);

Serial.print("Temperature:");

Serial.print (DHT. temperature);

Serial.print("°C, Humidity:");

Serial.print(OHT. humidity);

Serial.println("%"); 
delay(1000);
