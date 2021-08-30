#include <Servo.h> //incluimos la libreria servo

Servo servo_1; //se agrega un elemento del tipo servo

void setup() {

servo_1.attach(9); //se asigna el pin 9 al servo

}

void loop() {

servo_1.write(0); // esta linea de codigo indica la posicion a la que debe posicionarse el servo, en este caso, 0°
delay(2000); // demora de 2 segundos por accion

servo_1.write(180); // indicamos que el servo debe colocarse a 180°
delay(2000); // demora de 2 segundos

//posterior a esto, se repetira todo el loop indefinidamente.

}

//FIN.
