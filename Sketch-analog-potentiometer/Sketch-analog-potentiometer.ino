const int led = 2;
int  brightness; 
const int potentiometer = A0;
int value;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop(){
  value = analogRead(potentiometer);
  Serial.println(value);
  analogWrite(led, value/4);
  delay(10);
}