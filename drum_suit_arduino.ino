void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);//hi_hat
  pinMode(3,INPUT);//snare
  pinMode(4,INPUT);//kick
  pinMode(5,INPUT);//tom_high
  pinMode(6,INPUT);//tom_mid
  pinMode(7,INPUT);//tom_floor
  pinMode(8,INPUT);//crash
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  ///////////////pin-2//////////////
  if (digitalRead(2) == HIGH){ 
   Serial.println("A");
   while (digitalRead(2)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(2)==LOW){ 
   }
 }
 ///////////////////////////////////
 ///////////////pin-3//////////////
  if (digitalRead(3) == HIGH){
   Serial.println("B");
   while (digitalRead(3)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(3)==LOW){ 
   }
 }
 /////////////////////////////////////

 ///////////////pin-4//////////////
  if (digitalRead(4) == HIGH){
   Serial.println("C");
   while (digitalRead(4)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(4)==LOW){
    
   }
 }
 /////////////////////////////////////

///////////////pin-5//////////////
  if (digitalRead(5) == HIGH){
   Serial.println("D");
   while (digitalRead(5)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(5)==LOW){
   }
 }
 /////////////////////////////////////

 ///////////////pin-6//////////////
  if (digitalRead(6) == HIGH){
   Serial.println("E");
   while (digitalRead(6)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(6)==LOW){
   }
 }
 /////////////////////////////////////

 ///////////////pin-7//////////////
  if (digitalRead(7) == HIGH){
   Serial.println("F");
   while (digitalRead(7)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(7)==LOW){
   }
 }
 /////////////////////////////////////

 ///////////////pin-8//////////////
  if (digitalRead(8) == HIGH){
   Serial.println("G");
   while (digitalRead(8)==HIGH)  {
    //do nothing  
   }
   if(digitalRead(8)==LOW){
   }
 }
 /////////////////////////////////////

 
 delay(1);
}
