int LED=13; //variable del pin a seleccionar 
void setup() {
    pinMode(LED, OUTPUT); //dejand el pin 13 como salida
    Serial.begin(9600); //iniciamos la interfz serial 
}

void loop() {
    if (Serial.available()) {
        char c = Serial.read(); //leemos la interfaz serial
        if (c == 'H') { // si es h 
            digitalWrite(LED, HIGH); //encendemos el led
        }
        else if (c == 'L') { //si es L
            digitalWrite(LED, LOW); //apagamos el led
        }
    }d
}
