int redLed=13;
int blueLed=12;
int greenLed=8;

int di=100;
int da=200;
int de=400;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed,HIGH);
  delay(di);
  digitalWrite(redLed,LOW);
  delay(di);

  digitalWrite(redLed,HIGH);
  delay(di);
  digitalWrite(redLed,LOW);
  delay(di);

  digitalWrite(redLed,HIGH);
  delay(di);
  digitalWrite(redLed,LOW);
  delay(di);

  digitalWrite(redLed,HIGH);
  delay(di);
  digitalWrite(redLed,LOW);
  delay(di);

  digitalWrite(redLed,HIGH);
  delay(di);
  digitalWrite(redLed,LOW);
  delay(di);

  digitalWrite(blueLed,HIGH);
  delay(da);
  digitalWrite(blueLed,LOW);
  delay(da);

  digitalWrite(blueLed,HIGH);
  delay(da);
  digitalWrite(blueLed,LOW);
  delay(da);

  digitalWrite(blueLed,HIGH);
  delay(da);
  digitalWrite(blueLed,LOW);
  delay(da);

  digitalWrite(blueLed,HIGH);
  delay(da);
  digitalWrite(blueLed,LOW);
  delay(da);

  digitalWrite(blueLed,HIGH);
  delay(da);
  digitalWrite(blueLed,LOW);
  delay(da);

  digitalWrite(greenLed,HIGH);
  delay(de);
  digitalWrite(greenLed,LOW);
  delay(de);

  digitalWrite(greenLed,HIGH);
  delay(de);
  digitalWrite(greenLed,LOW);
  delay(de);

  digitalWrite(greenLed,HIGH);
  delay(de);
  digitalWrite(greenLed,LOW);
  delay(de);

  digitalWrite(greenLed,HIGH);
  delay(de);
  digitalWrite(greenLed,LOW);
  delay(de);

  digitalWrite(greenLed,HIGH);
  delay(de);
  digitalWrite(greenLed,LOW);
  delay(de);

}
