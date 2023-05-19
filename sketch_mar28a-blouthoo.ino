int estado=0;

void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
 if(Serial.available()>0){
 estado = Serial.read();
 }
  if (estado =='1'){
   digitalWrite(13,HIGH);
  }
if(estado=='2'){
   digitalWrite(13,LOW);
  }
  char X = Serial.read();
  if(X=='a')
    digitalWrite(13,HIGH);
  if(X=='b')
    digitalWrite(13,LOW);  
}
