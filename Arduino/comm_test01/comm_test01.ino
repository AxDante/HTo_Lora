char val;

void setup() {
  Serial.begin(9600);
  Serial2.begin(115200);
  Serial.println("Start");
  Serial2.println("Start");
}

void loop() {
  if( Serial2.available()>0){
    val = Serial2.read();         // read it and store it in 'val'
    Serial.print(val);
  }else{
    Serial.println("sending");
    Serial2.print("[S21_time_" + String(millis()/100) + "]");
    delay(4000);
  }
  delay(10);
}
