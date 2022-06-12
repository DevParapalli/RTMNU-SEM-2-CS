
#include <Servo.h> //servo library

Servo servo;

int trigPin = 5;
int echoPin = 6;
int servoPin = 7;
int led = 10;
long duration, dist, average;
long aver[3]; // array for average

void setup()
{
    Serial.begin(9600);
    servo.attach(servoPin);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    servo.write(0); // close cap on power on
    delay(100);
    servo.detach();
}

void loop()
{
    for (int i = 0; i <= 2; i++)
    {
        digitalWrite(10, HIGH);
        digitalWrite(trigPin, LOW);
        delayMicroseconds(5);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(15);
        digitalWrite(trigPin, LOW);
        pinMode(echoPin, INPUT);
        duration = pulseIn(echoPin, HIGH);
        dist = (duration / 2) / 29.1;
        aver[i] = dist;
        delayMicroseconds(10);
    }
    dist = (aver[0] + aver[1] + aver[2]) / 3;
    Serial.println(dist);
    if (dist < 50)
    {
        // Serial.println("OPEN");
        // servo.attach(servoPin);
        // delay(1);
        // servo.write(100);
        // delay(10);
        // servo.detach();
        servo.attach(servoPin);
        delay(1);
        servo.write(0);
        delay(3000);
        servo.write(150);
        delay(1000);
        servo.detach();
    }
    else
    {
        Serial.println("CLOSE");
        servo.attach(servoPin);
        delay(1);
        servo.write(0);
        delay(10);
        servo.detach();
    }
}