int 1Y_pin = 0;
int 1X_pin = 1;
int 2Y_pin = 2;
int 2X_pin = 3;
int 3Y_pin = 4;
int 3X_pin = 5;

String OutputString;


void setup() {
  Serial.begin(115200);
}

void loop() {


OutputString = String(String(analogRead(1X_pin)) +
"," + String(analogRead(2X_pin)) +
"," + String(analogRead(3X_pin)) +
"," + String(analogRead(1Y_pin)) +
"," + String(analogRead(2Y_pin)) +
"," + String(analogRead(3Y_pin)));

Serial.print("s");
Serial.print(OutputString);
Serial.print(",");
}
