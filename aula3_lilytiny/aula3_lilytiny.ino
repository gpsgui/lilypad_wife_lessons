#include <math.h>
/*  
 *   Aula 2
 *   
 *  Assunto : Asa branca e Música "aleatória"
 *  
 *  Placa : Lilytiny (versão do lilypad com Attiny85)
 * 
 *  Objetivo: tocar um trecho de asa branca e, depois, tentar
 *            fazer com que uma música aleatória (ou pseudo-aleató-
 *            ria) seja tocada infinitamente (ficou massa\o/)
 *  
 *  AVISO : algum conhecimento de música (escalas, notas, duração) 
 *          é um pré-requisito para entender o código!
 */
 const int buzzer= 0;
 int  i,
      // numeros relativos a escala maior de um tom genérico
      // cara número equivale ao "indice" da nota, dentro das 
      // 12 possíveis na escala cromática
      escala[7]={0, 2, 4, 5, 7, 9, 11};
      //asa_branca[7] = {0, 2, 4, 7, 7, 4, 5};
 float  notas[12],
        tempos[5] = {0.125, 0.25, 0.5, 1, 2}; 
        
        //tempos[7] = {0.5 , 0.5 , 1 , 1 , 1, 1, 2};
 float f_0 = 261.63;  // frequencia base : Dó da 4ª oitava
  int dur;
void setup() {
  pinMode(3, INPUT);
  pinMode(buzzer, OUTPUT);
  randomSeed(analogRead(3));
  // put your setup code here, to run once:
  for (i=0; i<12; i++){
    notas[i]= f_0 *pow(2, i/12.0 );
  }
//  for(i=0; i<7; i++){
//    tone (buzzer, notas[asa_branca[i]],1000*tempos[i]);
//    delay (1000*tempos[i]);
//  }
}
void loop() {
  // put your main code here, to run repeatedly:
  dur = tempos[random(5)]*1000; // duração aleatória da nota
  tone (buzzer, notas[escala[random(7)]], dur); // nota aleatória
  delay (dur);
}
