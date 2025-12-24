int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
}

void loop() {
  sensorValue = digitalRead(sensorPin);  
  if(sensorValue == LOW){
    Serial.println("Object Detected!");
  } else {
    Serial.println("No Object");
  }
  delay(500);  
}
