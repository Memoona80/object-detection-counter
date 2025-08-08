#include <LiquidCrystal.h>

// LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int irsensorPin = 13;  
int visitorCount = 0;
bool sensorTriggered = false;

void setup() {
  pinMode(irsensorPin, INPUT);
  lcd.begin(16, 2);              
  lcd.setCursor(0, 0);       
  lcd.print("Visitors Count:");   
  lcd.setCursor(0, 1);           
  lcd.print(visitorCount);      
}

void loop() {
  int sensorValue = digitalRead(irsensorPin);
  
  if (sensorValue == HIGH && !sensorTriggered) {
    visitorCount++;               
    sensorTriggered = true;       

    lcd.setCursor(0, 1);     
    lcd.print("                "); 
    lcd.setCursor(0, 1);          
    lcd.print(visitorCount);      
    
  } else if (sensorValue == LOW) {
    sensorTriggered = false;      
  }

  delay(100);  // Small delay to debounce
}
