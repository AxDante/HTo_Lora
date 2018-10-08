char val;

void setup() {
  Serial.begin(9600);
  Serial3.begin(115200);
  Serial.println("Start");
  Serial3.println("Start");
}

void loop() {
  if( Serial3.available()>0){
    val = Serial3.read();         // read it and store it in 'val'
    Serial.print(val);
  }else{
    Serial.println("sending");
    Serial3.print("[time_" + String(millis()/100) + "]");
    delay(4000);
  }
  delay(10);
}
