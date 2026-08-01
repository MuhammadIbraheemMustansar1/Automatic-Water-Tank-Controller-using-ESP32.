const int buttonPin = 19;
const int floatPin  = 18;
const int pumpPin   = 23;

bool pumpRunning = false;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(floatPin, INPUT_PULLUP);
  pinMode(pumpPin, OUTPUT);

  digitalWrite(pumpPin, LOW);
}

void loop()
{
  // Start pump when button is pressed
  if (digitalRead(buttonPin) == LOW)
  {
    delay(30);   // debounce

    if (digitalRead(buttonPin) == LOW)
    {
      if (digitalRead(floatPin) == LOW)
      {
        pumpRunning = true;
      }

      // Wait until button is released
      while (digitalRead(buttonPin) == LOW);
      delay(30);
    }
  }

  // Stop pump when tank is full
  if (digitalRead(floatPin) == HIGH)
  {
    pumpRunning = false;
  }

  digitalWrite(pumpPin, pumpRunning);
}