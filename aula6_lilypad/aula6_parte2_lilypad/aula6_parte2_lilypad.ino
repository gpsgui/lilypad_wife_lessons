/*  Aula 6 parte 1
 *   
 *  Assunto : "Monitor Serial" para VUSB : pegadinha do pen-drive
 *  
 *  Placa : Lilytiny (versão do lilypad com o attiny85)
 *  
 *  Objetivo: entender como funciona a implementação da emulação
 *            de um teclado, que "serve" como substituta da comuni-
 *            cação serial, ausente nessa placa
 */
#include "DigiKeyboard.h"

int i;
void setup() {
  // put your setup code here, to run once:
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("esse computador vai se auto destruir em");
  DigiKeyboard.delay(1000);
  
  for( i=10; i>0;i--){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println(i);
    DigiKeyboard.delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
