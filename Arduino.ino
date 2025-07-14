#include <Servo.h>
#define trigPin 9
#define echoPin 10
#define ledVermelho 7
#define ledVerde 6
#define servoPin 3
Servo cancela;
void setup() {
  Serial.begin(9600);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  cancela.attach(servoPin);
  cancela.write(0); // cancela fechada
  digitalWrite(ledVerde, HIGH);   // sistema em espera
  digitalWrite(ledVermelho, LOW);
}s
void loop() {
  long duracao;
  float distancia;
  // Envia pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Mede duração do eco
  duracao = pulseIn(echoPin, HIGH);
  distancia = duracao * 0.034 / 2;
  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");
  if (distancia < 15) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
    cancela.write(90); // Abre a cancela
    delay(3000);       // Espera 3 segundos
    cancela.write(0);  // Fecha a cancela
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(2000); // Pequena pausa antes de permitir nova detecção
  }
  delay(100); // Pequeno atraso para estabilidade
}
