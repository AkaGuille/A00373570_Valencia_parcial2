int HDT = A0;
int levelHDT = 0;
int isPressed = 0;
const int BTN = 2;
const int BUZZER = 3;
const int PIN_A = 4;
const int PIN_B = 5;
const int PIN_C = 6;
const int PIN_D = 7;
const int PIN_E = 8;


void setup()
{
  Serial.begin(9600);
  pinMode(BTN, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
  pinMode(PIN_E, OUTPUT);
}

void loop()
{
  levelHDT = analogRead(HDT);
  Serial.println(levelHDT);
  isPressed = digitalRead(BTN);
  Serial.println(isPressed);

  if (levelHDT <= 175){
    tone(BUZZER, 1000);
    delay(1000); 
    noTone(BUZZER);
    delay(1000); 
  } else if (levelHDT >= 700){
    tone(BUZZER, 1000);
    }
  
  if(levelHDT == 876){
    digitalWrite(PIN_A, HIGH); 
    digitalWrite(PIN_B, HIGH); 
    digitalWrite(PIN_C, HIGH); 
    digitalWrite(PIN_D, HIGH); 
    digitalWrite(PIN_E, HIGH); 
  } 
  
  if(isPressed == 1){
    noTone(BUZZER);
    delay(5000);
  }
  
}
