/*  Aula 1
 *   
 *  Assunto : PWM (Pulse Width Modulation) 
 * 
 */

const int verm = 0;
#include<math.h>

int i;

float t;

float w= 6*3.14;

void setup() {
  // put your setup code here, to run once:

  pinMode(verm, OUTPUT); // setei o pino 0 como saída
  
  // ciclo de brilho do led vermelho
//  for( i=255 ; i>=0 ; i--){
//    analogWrite(verm, i);
//    delay(20);
//  }
//  for( i=0 ; i<=255 ; i++){
//    analogWrite(verm, i);
//    delay(20);
//  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

 //analogWrite(verm, random(60,256));
 
 //delay(100);

 t=(millis()/1000.0);
 
 analogWrite(verm,(127* sin(w*t)+127));

 
}
