//Anjali Shiyamsaran
//Compatibility Machine
//Idea based on the "The Button" YouTube series by The Cut 
//Two people determine how compatible they are when asked personal questions.
//If either person decides they are not compatible based on their answers, they press the photocell and the LED lights up, indicating they are not compatible.
//If neither person has pressed the photocell by the end of the game, they are compatible.

//set pin numbers
const int ledPin = 10; //the number of the LED pin
const int ldrPin = A0; //the number of the LDR pin

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); //initialize the LED pin as an output
  pinMode(ldrPin, INPUT); //initialize the LDR pin as an input
}

void loop() {

  int ldrStatus = analogRead(ldrPin); //read the status of the LDR value

  //check if the LDR status is <= 200
  //if so, the LED is HIGH
  if (ldrStatus <= 200) {
    digitalWrite(ledPin, HIGH); //turn LED on
    Serial.println("THE BUTTON IS PRESSED, YOU ARE NOT COMPATIBLE");
  }
  else {
    digitalWrite(ledPin, LOW); //turn LED off
    Serial.println("---------------");
  }
}
