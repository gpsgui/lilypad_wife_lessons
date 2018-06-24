/*  Aula 1
 *   
 *  Assunto : PWM (Pulse Width Modulation) 
 *  
 *  Placa : Lilytiny (versão do lilypad com Attiny85)
 * 
 *  Objetivo :  Entender como funciona o PWM e aplicar criando 
 *              efeitos em um um led RGB ÂNODO COMUM (! acende em 0 !)
 */


#include<math.h>

int i;
const int verm = 0;
float t;
float w = 6*3.14; // frequencia angular do seno

void setup() {
  // put your setup code here, to run once:

  pinMode(verm, OUTPUT); // setei o pino 0 como saída
  
  // ciclo de brilho do led vermelho (teste simples)
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
 
 // escrevendo um valor em PWM referente a uma onda seno 
 // com a seguinte equação: f(t) = 127*sin(w*t) + 127
 analogWrite(verm,(127* sin(w*t)+127));

}
