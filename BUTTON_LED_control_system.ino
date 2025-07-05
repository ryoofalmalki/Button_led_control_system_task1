//ryoof almalki

const int firstButton = 2;
const int secondButton = 4;
const int thirdButton = 7;

const int firstLED = 8;
const int secondLED = 9;
const int thirdLED = 10;

void setup() {
  pinMode(firstButton, INPUT);
  pinMode(secondButton, INPUT);
  pinMode(thirdButton, INPUT);

  pinMode(firstLED, OUTPUT);
  pinMode(secondLED, OUTPUT);
  pinMode(thirdLED, OUTPUT);
}

void loop() {
  if (digitalRead(firstButton) == HIGH) {
    digitalWrite(firstLED, HIGH);
  } else {
    digitalWrite(firstLED, LOW);
  }

  if (digitalRead(secondButton) == HIGH) {
    digitalWrite(secondLED, HIGH);
  } else {
    digitalWrite(secondLED, LOW);
  }

  if (digitalRead(thirdButton) == HIGH) {
    digitalWrite(thirdLED, HIGH);
  } else {
    digitalWrite(thirdLED, LOW);
  }
}