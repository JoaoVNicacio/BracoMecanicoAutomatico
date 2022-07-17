// Adição de biblioteca servo:
#include <ESP32Servo.h>

// Definindo os pinos dos servos:
#define pinoServo1 16
#define pinoServo2 17
#define pinoServo3 21
#define pinoServo4 22

// Variáveis dos motores servo:
Servo motorBase, motorVertical, motorProfundor, motorGarra;

void setup() {
  
  // Inicia o motor serial:
  Serial.begin(9600);

  // Atribições de pinos nas variaveis dos motores:
  motorBase.attach(pinoServo1);
  motorVertical.attach(pinoServo2);
  motorProfundor.attach(pinoServo3);
  motorGarra.attach(pinoServo4);
 
}

void loop() {
  
  // Posições iníciais do servo:
  motorBase.write(0);
  motorVertical.write(0);
  motorProfundor.write(0);
  motorGarra.write(0);

  delay(1000);
  
  // Movimento do motor de base;
  motorBase.write(180);
  delay(1000);

  // Movimento do motor vertical:
  motorVertical.write(90);
  delay(1000);

  // Movimento motor profundor:
  motorProfundor.write(90);
  delay(1000);

  // Movimento do motor profundor:
  motorGarra.write(90);
  delay(1000);
 
}
