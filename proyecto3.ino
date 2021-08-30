#include <Servo.h> //incluimos la libreria servo

Servo servo_1; //agregamos un elemento del tipo servo

int valor_potenciometro; //esta variable servira para guardar los valores enviados por la entrada analogica del potenciometro
int angulo; //esta variable servira para guardar la conversion de la entrada analogica a un valor capaz de ser leido por el servo

void setup() {

servo_1.attach(9); //se asigna el pin 9 al servo

}

void loop() {

valor_potenciometro = analogRead(0); //se lee la entrada analogica 0 y se guarda sus valores en la variable "valor_potenciometro"
angulo = map(valor_potenciometro, 0, 1023, 0, 180); //el rango de valores de las entradas analogicas es de 0 a 1023, mientras que para el servomotor los valores son de 0 a 180 
//la funcion map "mapea" o convierte los valores de la entrada analogica a un valor capaz de ser usado por el servo

servo_1.write(angulo); //asignamos a la funcion write el valor de la variable "angulo" 
delay(10); // retraso de 10 milisegundos

}

//FIN.
