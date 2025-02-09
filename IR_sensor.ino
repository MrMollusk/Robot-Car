const int L_IR = D5;
const int R_IR = D12;

//Used to store previous HIGH/LOW state of pin
bool LIR_previous;
bool RIR_previous;

void setup() {

  Serial.begin(9600);
  pinMode(L_IR, INPUT);
  pinMode(R_IR, INPUT);

}

void loop() {

  if (digitalRead(L_IR) != LIR_previous){
    Serial.print("Left eye is: ");

    //Reads the state of the pins (0 or 1)
    //A 0 means the sensor detects something, A 1 means the sensor detects nothing
    Serial.print("Left IR sensor is: ");
    Serial.println(digitalRead(L_IR));
    Serial.print("Right IR sensor is: ");
    Serial.println(digitalRead(R_IR));

    //Used to store the past data from the IR pin, ensures that it only prints sensor data when an event occurs
    LIR_previous = digitalRead(L_IR);
    RIR_previous = digitalRead(R_IR);
    
    // Serial.print("previous is: ");
    // Serial.println(LIR_previous);
    // Serial.println(RIR_previous);
  }

  delay(100);

}
