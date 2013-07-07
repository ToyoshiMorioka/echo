void setup(){
  Serial.begin(9600);
}

void loop(){
  delay(1000);
  if(Serial.available()){
     Serial.print("echo:"); 
     while(Serial.available()) Serial.write(Serial.read());
     Serial.println("");
  }
}
