char val;

void setup() {
  Serial3.begin(115200);
  Serial3.println("Start");
}

void loop() {
  Serial3.print("[temp_1.32]");
  delay(1000);
}
