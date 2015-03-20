/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************
 const int sA = 5;
  const int sB = 6;
  const int sC = 7;
  const int sD = 8;
  const int sE = 9;
  const int sF = 10;
  const int sG = 11;
  int pausa = 500;
//******  Setup  ********************************************************
void setup(){
  
  pinMode(sA, OUTPUT);
  pinMode(sB, OUTPUT);
  pinMode(sC, OUTPUT);
  pinMode(sD, OUTPUT);
  pinMode(sE, OUTPUT);
  pinMode(sF, OUTPUT);
  pinMode(sG, OUTPUT);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sE,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,LOW);  

delay(pausa);
 }

//******  Loop  *********************************************************
void loop(){

digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sE,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sC,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sE,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sD,HIGH);  
digitalWrite(sE,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

digitalWrite(sA,HIGH);  
digitalWrite(sB,HIGH);  
digitalWrite(sC,HIGH);  
digitalWrite(sF,HIGH);  
digitalWrite(sG,HIGH);

delay(pausa);

}
