const int led = 2;
int  brightness; 

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop(){
  for (brightness=0; brightness<=255; brightness +=5){
  analogWrite(led, brightness);
  delay(50);
}
for (brightness=255; brightness>=0; brightness -=5){
  analogWrite(led, brightness);
  delay(50);
  }
}