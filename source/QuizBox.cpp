#include <LiquidCrystal.h>
#define QUESTIONS 4

//Flags and variables used to track answers
volatile bool continueFlag;
volatile byte answer, rightAnswers = 0;

//Liquid crystal variable inizialization
byte rs = 12, en = 11, d4 = 10, d5 = 9, d6 = 8, d7 = 7;
LiquidCrystal screen(rs, en, d4, d5, d6, d7);

//Strings containing the questions
char questions[QUESTIONS][16] = {"4*4=?       ","2-3*2+5=?    ","2+2=?        ","2X=4, X=?    "};

//Strings containing possible answers
char answers[QUESTIONS][16] = {"1)16   2)8    ","1)3    2)1    ","1)3    2)4    ","1)2    2)4    "};

//Strings contiaining correct answers
char correct[QUESTIONS][16] = {"4*4=16     ","2-3*2+5=1  ","2+2=4      ","2X=4, X=2   "};

//Answer keys
int keys[QUESTIONS] = {1,2,2,1};

void setup(){
  //Enabling interrupts, setting up input pins and attaching interrupts
  interrupts();
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), pin2_ISR, FALLING);
  attachInterrupt(digitalPinToInterrupt(3), pin3_ISR, FALLING);
  
  //Initializing LCD screen 
  screen.begin(16,2);
  
  //Printing home screen
  screen.print("QuizBox V1");
  screen.setCursor(0,1);
  screen.print("Press to begin");
  
  //Waiting for user input
  continueFlag = true;
  while(continueFlag){
    delayMicroseconds(1000);
  }
  
  //loop to ask the questions
  for(volatile int i=0; i<QUESTIONS; i++){
    continueFlag = true;
    
    //Printing questions and possible answers
    screen.setCursor(0,0);
    screen.print(questions[i]);
    screen.setCursor(0,1);
    screen.print(answers[i]);
    
    //Waiting for user input
    while(continueFlag){
      delayMicroseconds(1000);
    }

    //Printing the answer result
    screen.setCursor(0,0);
    if(answer == keys[i]){
      screen.print("Right answer!   ");
      rightAnswers++;
    }else{
      screen.print("Wrong answer!   ");
    }

    //Printing the correct answer
    screen.setCursor(0,1);
    screen.print(correct[i]);

    delay(5000);
  }

  //Printing final results
  screen.setCursor(0,0);
  screen.print("Overall score: ");
  screen.setCursor(0,1);
  screen.print(rightAnswers);
  screen.setCursor(1,1);
  screen.print("/4 correct");
}

void loop(){}

void pin2_ISR(){
  continueFlag = false;
  answer = 1;
}

void pin3_ISR(){
  continueFlag = false;
  answer = 2;  
}
