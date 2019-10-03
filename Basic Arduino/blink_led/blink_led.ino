//Cole Neal
// 8/21/19
//Hello Arduino

void setup() {
   pinMode(9, OUTPUT);
   Serial.begin(9600);
}

void loop() {
   Serial.println("Hello World");
   digitalWrite(9,HIGH);
   delay(1000);
   digitalWrite(9,LOW);
  delay(1000);
}

//digitalWrite is a command that is used to write the status of digital pins.
//because pinmode is on the same numberas the pin my wire is in
//it will set the data rate to 8700bps
//the slower the blinking becomes
//i am good
