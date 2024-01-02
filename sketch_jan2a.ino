#include <LiquidCrystal.h>

const int rs = 7, e = 8, d0 = 10; //etc etc 
LiquidCrystal lcd(rs, e, 9, 10, 11, 12);
char greeting[] = {212, 175, 206, 176};
char name[] = {180, 216, 175, 184};
char goodmorning[] = {181, 202, 214, 179, 176};
int i = 0;
int j = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}

void loop() {
  if(i >= 0 && i <= 3){
    lcd.print(greeting[j]);
    j++;
  }
  if(i == 4){
    lcd.setCursor(5, 0);
    j = 0;
  }
  if(i >= 4 && i <= 7){
    lcd.print(name[j]);
    j++;
  }
  if (i == 8){
    lcd.setCursor(0, 1);
    j = 0;
  }
  if(i >= 8 && i <= 12){
    lcd.print(goodmorning[j]);
    j++;
  }
  i++;
  delay(1000);
}
