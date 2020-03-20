int switchState1 = 0;
int switchState2 = 0; 

void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, INPUT);  
  pinMode(2, INPUT);
}

void loop() {  
  switchState1 = digitalRead(2);
  switchState2 = digitalRead(3);
  
  if(switchState2 == LOW && switchState1 == HIGH){
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW); 
   digitalWrite(7, HIGH); 
       
   delay(250);
   }
   
   else if (switchState2 == HIGH && switchState1 == LOW){
   
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW);

    delay(250);
    digitalWrite(4, LOW);
    delay(250);
   }
   
   else if(switchState2 == HIGH && switchState1 == HIGH){ 
   
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW); 
   digitalWrite(7, LOW);
   delay(250);
   
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH); 
   digitalWrite(7, HIGH);
   delay(250);
    
   }
   
   else{
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    
   }
}
