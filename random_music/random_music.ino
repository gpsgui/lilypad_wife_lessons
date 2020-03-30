/*      Experimentos com música aleatória
 *
 *
 */
#include<math.h>
#define C3 130.81
#define C4 261.63
#define C5 523.25

const float f_0 = C5;         //Hz
const float dur_base = 300;   //ms
float notas[13];
const int escala_maior[8] = {0, 2, 4, 5, 7, 9, 11, 12},
          escala_blues[7] = {0, 3, 5, 6, 7, 10, 12},
          escala_penta[6] = {0, 2, 4, 7, 9, 12},
          intervalo[5] = { 0.125, 0.25, 0.5, 1, 2},  // de semicolcheia a semibreve
          buz = 0;
int i;
          
void setup() {
  pinMode(buz, OUTPUT);
  randomSeed(analogRead(3));        // usando o sinal analógico do pino 3 como seed
  
  // calculando a frequência de todas as notas da escala cromática
  for (i=0; i<13; i++)
    notas[i]= f_0 *pow(2.0, i/12.0 );
}

void loop() {
  int dur = intervalo[random(sizeof(intervalo)/sizeof(intervalo[0]))]*dur_base; // duração aleatória da nota
  tone (buz, notas[escala_penta[random(sizeof(escala_penta)/sizeof(escala_penta[0]))]], dur); // nota aleatória
  delay (dur);
}
