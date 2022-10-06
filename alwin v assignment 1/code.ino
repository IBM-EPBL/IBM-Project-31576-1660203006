int pinSensor =2;
int pinLed = 12;
int pinBuzzer =13;
int prinSensor =0;
void setup()
{
pinMode (pinSensor, INPUT);
pinMode (pinLed, OUTPUT);
pinMode (pinBuzzer, OUTPUT);
}  
void loop()
{  
pinSensor = digitalRead(pinSensor);
if (pinSensor == HIGH)
{  
digitalWrite (pinLed, HIGH);
tone(pinBuzzer, 1000, 500);
}  
else{
digitalWrite(pinLed, LOW);
}  
delay(10);
}  