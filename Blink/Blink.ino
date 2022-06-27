unsigned long long Millis = 0;
const short Delay = 300;
bool Out = false;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if (millis() - Millis >= Delay)
  {
    Millis = millis();
    Out = !Out;
    digitalWrite(LED_BUILTIN, Out);
  }
}
