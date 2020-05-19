/*MStronik♥Arduino♥Electronic dice
 * https://mstronik.blog/2018/10/19/electronic-dice/
 * Simulierung von einem elektronischen Würfel
 * mit Random-Funktion
 */
int pushButton = 2;
int LED_1_4 = 13;
int LED_2_5 = 11;
int LED_3_6 = 10;
int LED_7 = 12;
int val_Dice = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1_4, OUTPUT);
  pinMode(LED_2_5, OUTPUT);
  pinMode(LED_3_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(pushButton, INPUT);
  //Serial.begin(9600);
}

//**** MAIN ***************************

void loop() {
  // put your main code here, to run repeatedly:
 
 if (digitalRead(pushButton) == HIGH)
 {
  rolling_dice();
  val_Dice = random (1,7);
  show_number(val_Dice);
  }
}

//******************* FUNCTIONS ***********************************************  
void show_one(){
    digitalWrite(LED_7, HIGH);
    digitalWrite(LED_1_4, LOW);
    digitalWrite(LED_2_5, LOW);
    digitalWrite(LED_3_6, LOW);
    }
    
void show_two(){
    digitalWrite(LED_1_4, HIGH);
    digitalWrite(LED_7, LOW);
    digitalWrite(LED_2_5, LOW);
    digitalWrite(LED_3_6, LOW);
    }
    
void show_three(){
    digitalWrite(LED_1_4, HIGH);
    digitalWrite(LED_7, HIGH);
    digitalWrite(LED_2_5, LOW);
    digitalWrite(LED_3_6, LOW);
    }
    
void show_four(){
    digitalWrite(LED_1_4, HIGH);
    digitalWrite(LED_3_6, HIGH);
    digitalWrite(LED_7, LOW);
    digitalWrite(LED_2_5, LOW);
    }
  
void show_five(){
    digitalWrite(LED_1_4, HIGH);
    digitalWrite(LED_7, HIGH);
    digitalWrite(LED_3_6, HIGH);
    digitalWrite(LED_2_5, LOW);
    } 
void show_six(){
    digitalWrite(LED_1_4, HIGH);
    digitalWrite(LED_2_5, HIGH);
    digitalWrite(LED_3_6, HIGH);
    digitalWrite(LED_7, LOW);
   }

//******** show number function ************************
void show_number(int num){
     switch (num){
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
    default:
      break;    
   }
}
//********** rolling dice function ************************ 
 
 void rolling_dice()
 {  int i;
    for (i=1; i>7; i++){
      show_number(i);
      delay(100);
    }
    for (i=6; i>0; i--){
      show_number(i);
      delay(100);
    }
  
  }
  
