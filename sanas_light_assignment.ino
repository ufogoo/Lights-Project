//This is Sana Yasamani Khiabanis (3180650) Light Project!

void setup() {
   pinMode(9, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(13, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);

}

void loop() {
  
digitalWrite(6, HIGH); //turn the red light on
delay(300);
digitalWrite(6, LOW);//turn the red light off
delay(500);

digitalWrite(7, HIGH); //turn the red light on
delay(200);
digitalWrite(7, LOW);//turn the red light off
delay(500);

//time for the fade !

for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(11, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(11, fadeValue);
  delay(20);
}
for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(13, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(13, fadeValue);
  delay(20);
}
for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(9, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(9, fadeValue);
  delay(20);
}



for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(5, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(5, fadeValue);
  delay(30);
}

for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(2, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(2, fadeValue);
  delay(30);
}

for (int fadeValue = 0 ; fadeValue <=250; fadeValue += 5) {
  analogWrite(3, fadeValue);
  delay(20);
}
for (int fadeValue = 250 ; fadeValue >= 0; fadeValue -= 5) {
  analogWrite(3, fadeValue);
  delay(20);
}



}
