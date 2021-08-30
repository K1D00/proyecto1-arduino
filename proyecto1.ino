    #include <Servo.h> //se agrega la libreria servo
    
    Servo servo1; //se crea un elemento del tipo servo
    
    int pin_pulsador = 7;  //se asigna el pin 7 al pulsador
    int valor0, valor1, aux;  //aux guardara 2 valores: 0 o 1
    
    void setup() {
    
    servo1.attach(9); //se asigna el pin 9 al servomotor
    Serial.begin (9600);
    pinMode(pin_pulsador, INPUT); //se indica que el pulsador sera de entrada
    
    }
    
    void loop() {
    
    valor0 = digitalRead(pin_pulsador); //valor0 tomara el valor que indique el pulsador
    if((valor0==HIGH)&&(valor1==LOW)){ //si valor0 es igual a HIGH(1) y valor1 es igual a LOW(0) entonces...
    aux=1-aux;  //aux pasara a valer 1, y cuando se repita el bucle se restaurara a su valor original: 0
    delay(10);
      

    }
valor1=valor0;
    

    
    if(aux==1){ //si aux es igual a 1
      servo1.write(180); //el servo se pondra a 180 grados
      }
    
    if(aux==0){ //si aux es igual a 0
      servo1.write(0); //el servo se pondra a o grados
    }
    
 }

 //FIN. 
