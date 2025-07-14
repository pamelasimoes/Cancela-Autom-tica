Projeto: Cancela Automática com Arduino

Este projeto cria uma cancela automática que abre sozinha quando um objeto se aproxima e fecha depois de alguns segundos, usando Arduino, sensor ultrassônico e servo motor.

O que o projeto faz
	•	Detecta quando algo chega a menos de 15 cm usando o sensor ultrassônico.
	•	Abre a cancela automaticamente (servo gira).
	•	Fecha a cancela depois de 3 segundos.
	•	Usa LED verde para mostrar que está pronto e LED vermelho para mostrar que a cancela está aberta.
	•	Mostra a distância no Serial Monitor para acompanhar as leituras.

Materiais
	•	Arduino Uno
	•	Sensor ultrassônico HC-SR04
	•	Servo motor SG90
	•	LED verde e LED vermelho
	•	Resistores de 220Ω
	•	Protoboard e fios
	•	Material para a cancela (papelão ou acrílico)

Ligações principais
	•	Sensor ultrassônico:
	•	VCC → 5V Arduino
	•	GND → GND
	•	Trig → Pino 9
	•	Echo → Pino 10
	•	Servo motor:
	•	Sinal → Pino 3
	•	VCC → 5V
	•	GND → GND
	•	LED verde: Pino 6
	•	LED vermelho: Pino 7

Como funciona

1️⃣ Fica em espera com LED verde ligado.
2️⃣ Se detectar algo a menos de 15 cm, liga o LED vermelho e abre a cancela.
3️⃣ Espera 3 segundos com a cancela aberta.
4️⃣ Fecha a cancela e volta a ficar em espera com LED verde ligado.

Código

O código está pronto para ser carregado no Arduino usando a IDE do Arduino.
