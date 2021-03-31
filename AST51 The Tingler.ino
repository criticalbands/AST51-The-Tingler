int button1 = 2;
int output1 = 6;
int buttonState1 = 0;

int button2 = 3;
int output2 = 7;
int buttonState2 = 0;

int button3 = 4;
int output3 = 8;
int buttonState3 = 0;

int button4 = 5;
int output4 = 9;
int buttonState4 = 0;

void setup() {
  pinMode(output1, OUTPUT);
  pinMode(output2, OUTPUT);
  pinMode(output3, OUTPUT);
  pinMode(output4, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
}
void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);

  if (buttonState1 == HIGH) {
    digitalWrite(output1, HIGH);

  } else {
    digitalWrite(output1, LOW);
  }
  Serial.println(buttonState1);
  if (buttonState2 == HIGH) {
    digitalWrite(output2, HIGH);
  } else {
    digitalWrite(output2, LOW);
  }
  Serial.println(buttonState2);
  if (buttonState3 == HIGH) {
    digitalWrite(output3, HIGH);
  } else {
    digitalWrite(output3, LOW);
  }
  Serial.println(buttonState3);

  if (buttonState4 == HIGH) {
    digitalWrite(output4, HIGH);
  } else {
    digitalWrite(output4, LOW);
  }
  Serial.println(buttonState4);
}
