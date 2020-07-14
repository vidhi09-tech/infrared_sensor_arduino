//pin declartaion
//pin mode declaration
//pin data declaration

int ir = 2;
int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;

void setup()
{
    pinMode(ir, INPUT);
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop()
{
    int val = digitalRead(ir);
    Serial.println(val);

    if (val == 1)
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led3, LOW);
        delay(500);
    }
    else
    {
        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        digitalWrite(led4, LOW);
        delay(500);
    }
}
