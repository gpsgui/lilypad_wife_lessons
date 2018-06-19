/*  Aula 5 
 *   
 *  Assunto : Entradas digitais 
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
  if( digitalRead (botao) == 0){
    if(intensidade<255)
      intensidade++;
  }
  else {
    if(intensidade > 0)
      intensidade--;
  }
  analogWrite(led, intensidade);
  delay(20);
}
