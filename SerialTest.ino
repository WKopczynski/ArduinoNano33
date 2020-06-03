void setup() {
  Serial1.begin(115200);
}

void loop() {
  if (Serial.available() > 0){
    int data = Serial1.read();
    Serial1.write(data);
    Serial.write(data);
    delay(10);
  }
}
