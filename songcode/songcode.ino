/*ITZEL TEST COMMENT*/

/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
int output = 13;
int C4 = 262;
int C5 = 523;
int G4 = 392;
int A4 = 440;
int B4 = 493.9;
int D5 = 587;
int quarter = 667;
int eight = 333.5;
int dotquarter = 900;
int dothalf = 2000;
int halfnote = 900;

void setup()
{
for (int i = 0; i<1; i){
    //measure 1, 2 seconds
   //G4
    tone(output, G4);  //tone(outputPin,frequency)
      delay (eight);  //delay(milliseconds)
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (quarter);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (quarter);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
        
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100); 
  //A4
    tone(output, A4);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //D5
    tone(output, D5);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //B4
    tone(output, B4);  //tone(outputPin,frequency)
      delay (quarter);
    noTone(output);
      delay (900);
  //G4
    tone(output, G4);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //B4
    tone(output, B4);  //tone(outputPin,frequency)
      delay (eight);
    noTone(output);
      delay (100);
  //B4
    tone(output, B4);  //tone(outputPin,frequency)
      delay (quarter);
    noTone(output);
      delay (100);
  //B4
    tone(output, B4);
      delay (quarter);
    noTone(output);
      delay (100);
  //G4
    tone(output, G4);
      delay (eight);
    noTone(output);
      delay (100);
  //G4
    tone(output, G4);
      delay (eight);
    noTone(output);
      delay (100);
  //G4
    tone(output, G4);
      delay (eight);
    noTone(output);
      delay (100);
  //B4
    tone(output, B4);
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);
      delay (eight);
    noTone(output);
      delay (900);
  //C5
    tone(output, C5);
      delay (quarter);
    noTone(output);
      delay (900);
  //G4
    tone(output, G4);
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);
      delay (quarter);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);
      delay (dotquarter);
    noTone(output);
      delay (100);
  //A4
    tone(output, A4);
      delay (eight);
    noTone(output);
      delay (100);
  //C5
    tone(output, C5);
      delay (eight);
    noTone(output);
      delay (100); 




     }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
