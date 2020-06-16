boolean butt_flag = 0;
boolean butt;

const int diod_white1 = 42;
const int diod_white2 = 43;
const int diod_white3 = 44;
const int diod_white4 = 45;
const int diod_white5 = 46;
const int diod_white6 = 47;
const int diod_white7 = 48;
const int diod_white8 = 49;



void setup() {
  pinMode (A8, INPUT_PULLUP);
  
  pinMode (diod_white1, OUTPUT);
  pinMode (diod_white2, OUTPUT); 
  pinMode (diod_white3, OUTPUT);
  pinMode (diod_white4, OUTPUT);
  pinMode (diod_white5, OUTPUT);
  pinMode (diod_white6, OUTPUT);
  pinMode (diod_white7, OUTPUT);
  pinMode (diod_white8, OUTPUT);

}

void loop() {
  butt = !digitalRead (A8);
  if (butt == 1 && butt_flag == 0 ){
     butt_flag = 1;
       
      digitalWrite (diod_white1, 1);
      digitalWrite (diod_white8, 1);
      delay (500);
      digitalWrite (diod_white1, 0);
      digitalWrite (diod_white8, 0);
      
      digitalWrite (diod_white2, 1);
      digitalWrite (diod_white7, 1);
      delay (500);
      digitalWrite (diod_white2, 0);
      digitalWrite (diod_white7, 0);
      
      digitalWrite (diod_white3, 1);
      digitalWrite (diod_white6, 1);
      delay (500);
      digitalWrite (diod_white3, 0);
      digitalWrite (diod_white6, 0);
      
      digitalWrite (diod_white4, 1);
      digitalWrite (diod_white5, 1);
      delay (500);
      digitalWrite (diod_white4, 0);
      digitalWrite (diod_white5, 0);
     
    }
    butt_flag = 0;

    
}
