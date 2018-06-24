/*  Aula 0 
 *   
 *  Assunto : Estrutura de um programa arduino e Saídas Digitais 
 * 
 *  Placa : Lilytiny (versão do lilypad com Attiny85)
 * 
 *  Objetivo :  estudar e brincar com a estrutura de um programa
 *              em arduino (Wiring) e descobrir como funcionam saídas
 *              digitais, utiliando um led RGB ÂNODO COMUM (! acende em 0 !)
 */

const int verm = 0 , verd=1 , azul=2;

void setup() {
  // put your setup code here, to run once:

  pinMode(verm, OUTPUT); // setei o pino 0 como saída
  pinMode(verd, OUTPUT); // setei o pino 1 como saída
  pinMode(azul, OUTPUT); // setei o pino 2 como saída

  digitalWrite(verm , 0);  //acende o led
  digitalWrite(azul , 1);  //apaga o led
  digitalWrite(verd , 1);  //apaga  o led
    
  delay(1000);             //espera 1000ms
  
  digitalWrite(verm , 1);  //apaga o led
  digitalWrite(azul , 0);  //acende o led
  digitalWrite(verd , 1);  //apaga o led
    
  delay(1000);             //espera 1000ms
  
  digitalWrite(verd , 0);  //acende o led
  digitalWrite(azul , 1); //apaga o led
  digitalWrite(verm , 1);  //apaga o led
  
   delay(1000);             //espera 100ms
  
}

void loop() {
  // put your main code here, to run repeatedly:

 
}
