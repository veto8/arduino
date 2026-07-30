
 int pause = 2000;
 int p1 = 2;
 int p2 = 3;
 int p3= 4;
 int p4= 5;
 int reg8 = LOW;
 int reg4 = LOW;
 int reg2 = LOW;
 int reg1 = LOW;

 int s[4]={5,4,3,2}; 
 
 void setup() {
   
   Serial.begin(9600);  // start serial at 9600 baud
   Serial.println("\n\n\n\n\n\n\n\n\n\n");
   //Serial.println("Hello from Arduino");

   
   pinMode(p1,OUTPUT);
   pinMode(p2,OUTPUT);
   pinMode(p3,OUTPUT);
   pinMode(p4,OUTPUT);

 }

 void loop() {
   
  for (int i=0;i<=15;i++) 
   {
     reg8 = LOW;
     reg4 = LOW;
     reg2 = LOW;
     reg1 = LOW;
     int r = 0;
     if (i >= 8) {
       reg8 = HIGH;
       r =  i - 8;
     }
     else {
       r = i;

     }
     
     if(r >= 4 ) {
         reg4 = HIGH;
         r = r-4;
     }
     if(r >= 2 ) { 
           reg2 = HIGH;
           r = r-2;
     }
     if (r >=1) {
      reg1= HIGH;
      r = r -1;
     }



      Serial.println(i);
      Serial.println(String(reg8) + "" + String(reg4) + "" + String(reg2) + "" + String(reg1));
     
      digitalWrite(s[0],reg1);
      digitalWrite(s[1],reg2);
      digitalWrite(s[2],reg4);
      digitalWrite(s[3],reg8);
       delay(pause);
    }

    //delay(pause);


   




    
    
     
  
  

 }
