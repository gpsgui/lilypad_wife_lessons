/*  Aula 4
 *   
 *  Assunto : PWM (Pulse Width Modulation) e Cores
 *  
 *  Placa : Lilytiny (versão do lilypad com Attiny85)
 *  
 *  Objetivo: brincar um pouco mais com PWM e cores diferentes
 *            usando um led RGB ÂNODO COMUM (! acende no 0 !)  
 */
const int verde= 0, azul= 1;
int i;

void setup() {
  pinMode(verde ,OUTPUT );
  pinMode(azul, OUTPUT);
// abaixo acontece um efeito de transição entre o puro azul e o
// puro verde (e vice-versa)
//  for(i=0; i<=255; i++){
//      analogWrite ( azul , i );
//      analogWrite (verde, 255-i);
//      delay(25);
//  }
//  for(i=0; i<=255; i++){
//      analogWrite ( azul , 255-i );
//      analogWrite (verde, i);
//      delay(25);
//  }
}

void loop() {
  // aqui acontece a mesma coisa, só que continuamente
  for(i=0; i<=255; i++){
      analogWrite ( azul , i );
      analogWrite (verde, 255-i);
      delay(25);
  }
  for(i=0; i<=255; i++){
      analogWrite ( azul , 255-i );
      analogWrite (verde, i);
      delay(25);
  }
}
