//Cole Neal
//9/3/19

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin2 = 12;
const int ledPin1 = 11;

int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin1);
  Serial.println (buttonState);
  if (buttonState == HIGH) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }
  buttonState = digitalRead(buttonPin2);
  Serial.println (buttonState);
  if (buttonState == HIGH) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
}
