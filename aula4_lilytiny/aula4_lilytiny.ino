/*  Aula 4
 *   
 *  Assunto : PWM (Pulse Width Modulation) e Cores
 * 
 */
const int verde= 0, azul= 1;
int i;
void setup() {
  pinMode(verde ,OUTPUT );
  pinMode(azul, OUTPUT);
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
