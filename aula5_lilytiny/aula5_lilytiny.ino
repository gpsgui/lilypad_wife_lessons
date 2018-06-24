/*  Aula 5 
 *   
 *  Assunto : Entradas digitais
 *  
 *  Placa : Lilytiny (versão do lilypad com Attiny85)
 *  
 *  Objetivo: Entender o conceito de entrada digital, configuração 
 *            pull-up e como mudar o comportamento do arduino através
 *            de um botão
 * 
 */

int botao = 0,
    led   = 1;
int intensidade = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // se o botão for apertado, a intensidade do led aumenta
  if( digitalRead (botao) == 0){
    if(intensidade<255)
      intensidade++;
  }
  // se não, a intensidade diminui
  else {
    if(intensidade > 0)
      intensidade--;
  }
  analogWrite(led, intensidade);
  delay(20);
}
