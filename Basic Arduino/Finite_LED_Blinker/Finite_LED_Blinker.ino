//Cole Neal
//8/27/2019
//This code is a LED blinking on and off every second and stoping After 15 blinks.


int counter = 1;
void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (counter <= 15) {
    Serial.println(counter);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
    counter = counter + 1;
  }
}

//The if statement checks for a condition and executes the proceeding statement.
//You do not need an else statement. Nothing will happen if you don't have an else.
//There is no difference between x++ and x = x + 1
// When it runs once it will display the number 1.
//One equal means that it is equal. Two equal signs means that the Arduino needs to check if thet are equal.
//https://www.arduino.cc/reference/en/language/structure/control-structure/if/
//I need to remember to make the counter increase b once everytime.
