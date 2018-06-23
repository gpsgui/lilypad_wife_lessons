/*  Aula 6 parte 1
 *   
 *  Assunto : Monitor Serial
 *  Placa : NodeMcu
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
  
  if(Serial.available()>0){
    valorlido = Serial.read();
    Serial.println(valorlido);
  }
}
