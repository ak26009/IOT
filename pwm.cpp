int ledPin = 18;
int channel = 0;

void setup() {
  // ledcAttach( PIN(18) , FREQUENCY(5Khz) , RESOLUTION(8bits means 2^8 = 256) );
  ledcAttach(ledPin, 5000, 8);  
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    ledcWrite(ledPin, i);
    delay(10);
  }

  for (int i = 255; i >= 0; i--) {
    ledcWrite(ledPin, i);
    delay(10);
  }
}
