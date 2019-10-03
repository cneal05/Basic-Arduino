//Cole Neal
//8/27/2019

int ledPin = 9;
int delayVar = 2000;

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (delayVar > 0) {
    Serial.println(delayVar);
    digitalWrite(9, HIGH);
    delay(delayVar);
    digitalWrite(9, LOW);
    delay(delayVar);
    delayVar = delayVar - 200;
  }
}

//Void Setup is technically a function that you create at the top of each program, while void loop keeps running the same code inside of it until it is told to stop.
//A variable is a place to store a piece of data later in the program, you can refer to this variable by its name, at which point its value will be looked up and used.
//just to make sure that you are acctually doing it correctly.
//https://www.arduino.cc/en/Reference/VariableDeclaration.
//I need to make sure I change the Variable.
