/*  Aula 6 parte 1
 *   
 *  Assunto : Monitor Serial
 *  
 *  Placa : NodeMcu
 *  
 *  Objetivo: entender como funciona a comunicação serial e como
 *            se pode enviar e receber dados do arduino p/ compu-
 *            tador e vice-versa
 */
 char valorlido;
 
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("\n");
  Serial.println("oi");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // recebendo um caractere e imprimindo na Serial
  if(Serial.available()>0){
    valorlido = Serial.read();
    Serial.println(valorlido);
  }
}
