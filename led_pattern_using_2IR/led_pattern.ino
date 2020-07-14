//pin declartaion
//pin mode declaration
//pin data declaration

int ir1 = 1;
int ir2 = 2;
int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;

void setup()
{
    pinMode(ir1, INPUT);
    pinMode(ir2, INPUT);
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop()
{
    int val1 = digitalRead(ir1);
    int val2 = digitalRead(ir2);
    Serial.println(val1);
    Serial.println(val2);

    if (val1 == 0 && val2 == 0)
    {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (val1 == 0 && val2 == 1)
    {
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        delay(500);
    }
    else if (val1 == 1 && val2 == 0)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        delay(500);
    }
    else
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        delay(1000);
    }
}
