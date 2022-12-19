#include <DHT.h>

#define DHTPIN1 A1
#define DHTTYPE1 DHT22
#define DHTPIN2 A2

DHT air (DHTPIN1, DHTTYPE1);
DHT bed (DHTPIN2);

void setup() 
{
    pinMode(1, OUTPUT);   //vert
    pinMode(2, OUTPUT);   //rouge
    pinMode(3, OUTPUT);   //bed
    pinMode(A1, INPUT);   //air
    pinMode(A2, INPUT);   //bed
}

void loop () 
{
    double AirTemp = air.readTemperature();
    double AirHumid = air.readHumidity();
    double BedTemp = bed.readTemperature();

    Print("Temperature de l'air : ");
    Print(AirTemp);
    Println("°C");

    Print("Humidité de l'air : ");
    Print(AirHumid);
    Println("%");

    Print("Temperature du bed : ");
    Print(BedTemp);
    Println("°C");

    if (analogRead(A1) <= 50 && analogRead(A2) <= 60)
        digitalWrite(2, HIGHT);
        digitalWrite(1, LOW);
        digitalWrite(3, HIGHT);
    else(analogRead(A1) <= 50 && analogRead(A2) <= 60)
        if(!digitalRead(A1 <= 50))
            digitalWrite(1, HIGHT);
            digitalWrite(2, LOW);
        digitalWrite(4, LOW);
    delay (1000);
}
