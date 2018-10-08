void setup() {
  Serial.begin(9600);
  Serial3.begin(115200);
  Serial.println("Start");
  Serial3.println("Start");
}

void loop() {
  Serial3.print("[temp_1.32]");
  delay(4000);
}
