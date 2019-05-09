void setup() {
    pinMode(D6,OUTPUT);
    pinMode(D5,OUTPUT);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy",myHandler);
    
}

void loop() {
    //Particle.publish("Dean_Brynhildr_Wave_Buddy", "wave");
}

void myHandler(const char *event, const char *data)
{
    if (strcmp(data,"wave")==0)
    {
        for (int i = 1; i < 4; i++)
        {
            digitalWrite(D6,HIGH);
            delay(1000);
            digitalWrite(D6,LOW);
            delay(1000);
        }
    }
    if (strcmp(data,"pat")==0)
    {
        for (int i = 1; i < 3; i++)
        {
            digitalWrite(D5,HIGH);
            delay(500);
            digitalWrite(D5,LOW);
            delay(500);
        }
    }
}
