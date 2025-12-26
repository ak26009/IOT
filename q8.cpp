// 8.	WAP to control LED using Serial input.

int ledPin = 18; 
char command;     

void setup() {
  pinMode(ledPin, OUTPUT);     
  Serial.begin(115200);         
  Serial.println("Enter '1' to turn ON, '0' to turn OFF LED");
}

void loop() {
  if (Serial.available() > 0) {   
    command = Serial.read();       
    
    if (command == '1') {
      digitalWrite(ledPin, HIGH); 
      Serial.println("LED is ON");
    }
    else if (command == '0') {
      digitalWrite(ledPin, LOW);  
      Serial.println("LED is OFF");
    }
    else {
      Serial.println("Invalid command! Use '1' or '0'");
    }
  }
}
