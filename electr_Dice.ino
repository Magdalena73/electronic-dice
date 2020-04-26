/*MStronik♥Arduino♥Electronic dice
 * https://mstronik.blog/2018/10/19/electronic-dice/
 * Simulierung von einme elektronisch Würfel
 * mit Rendom-Funktion
 */
int pushButton = 2;
int pin1_4 = 13;
int pin2_5 = 11;
int pin3_6 = 10;
int pin7 = 12;
int val_Dice = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1_4, OUTPUT);
  pinMode(pin2_5, OUTPUT);
  pinMode(pin3_6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pushButton, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 if (digitalRead(pushButton) == HIGH)
 {
  rolling_dice();
  val_Dice = random (1,7);
  switch (val_Dice){
    case 1:
      show_one();
      break;
    case 2:
      show_two();
      break;
    case 3:
      show_three();
      break;
    case 4:
      show_four();
      break;
    case 5:
      show_five();
      break;
    case 6:
      show_six();
      break;  
   }
  }
}
//******************* FUNCTIONS ***********************************************  
void show_one(){
    digitalWrite(pin7, HIGH);
    digitalWrite(pin1_4, LOW);
    digitalWrite(pin2_5, LOW);
    digitalWrite(pin3_6, LOW);
    }
    
void show_two(){
    digitalWrite(pin1_4, HIGH);
    digitalWrite(pin7, LOW);
    digitalWrite(pin2_5, LOW);
    digitalWrite(pin3_6, LOW);
    }
    
void show_three(){
    digitalWrite(pin1_4, HIGH);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin2_5, LOW);
    digitalWrite(pin3_6, LOW);
    }
    
void show_four(){
    digitalWrite(pin1_4, HIGH);
    digitalWrite(pin3_6, HIGH);
    digitalWrite(pin7, LOW);
    digitalWrite(pin2_5, LOW);
    }
  
void show_five(){
    digitalWrite(pin1_4, HIGH);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin3_6, HIGH);
    digitalWrite(pin2_5, LOW);
    } 
void show_six(){
    digitalWrite(pin3_6, HIGH);
    digitalWrite(pin7, LOW);
    digitalWrite(pin2_5, HIGH);
    digitalWrite(pin1_4, HIGH);
   }
//********** roling dice function ************************ 
 
 void rolling_dice()
 {
  digitalWrite(pin1_4, HIGH);
  digitalWrite(pin2_5, LOW);
  digitalWrite(pin3_6, LOW);
  digitalWrite(pin7, LOW);
  delay(100);
  digitalWrite(pin1_4, LOW);
  digitalWrite(pin2_5, HIGH);
  digitalWrite(pin3_6, LOW);
  digitalWrite(pin7, LOW);
  delay(100);
  digitalWrite(pin1_4, LOW);
  digitalWrite(pin2_5, LOW);
  digitalWrite(pin3_6, HIGH);
  digitalWrite(pin7, LOW);
  delay(100);
  digitalWrite(pin1_4, LOW);
  digitalWrite(pin2_5, LOW);
  digitalWrite(pin3_6, LOW);
  digitalWrite(pin7, HIGH);
  delay(100);
  digitalWrite(pin1_4, LOW);
  digitalWrite(pin2_5, LOW);
  digitalWrite(pin3_6, HIGH);
  digitalWrite(pin7, LOW);
  delay(100);
  digitalWrite(pin1_4, LOW);
  digitalWrite(pin2_5, HIGH);
  digitalWrite(pin3_6, LOW);
  digitalWrite(pin7, LOW);
  delay(100);
  digitalWrite(pin1_4, HIGH);
  digitalWrite(pin2_5, LOW);
  digitalWrite(pin3_6, LOW);
  digitalWrite(pin7, LOW);
  delay(100);
  }
