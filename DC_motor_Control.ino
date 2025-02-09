const int in1 = 6;
const int in2 = 5;
const int enable = 9;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enable, 255); //Set full speed
}

void loop() {

}

