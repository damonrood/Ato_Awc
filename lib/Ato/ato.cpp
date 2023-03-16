#include "ato.h"



Ato::Ato(){
  pinMode(2, INPUT);  //normal sensor  (YELLOW 02)
  //digitalWrite(2,LOW);     //want normal to be in water by default (0 = in water)
  pinMode(4, INPUT);  //low sensor     (PURPLE 4)
  //digitalWrite(4,LOW);     //want low water to be in water by default (0 = in water)
  pinMode(13, INPUT);  //high sensor     (REDn13pz)
  //digitalWrite(13,HIGH);     //want hight water to be OUT of water by default (1 = out of water)
  pinMode(16, OUTPUT); //RO pump         (BLUE 16)  M1
  digitalWrite(16,0);
  pinMode(18, OUTPUT); //New pump        (WHITE 27) M3
  digitalWrite(18,0);
  pinMode(14, OUTPUT); //Sump pump       (GREEN 14) M2
  digitalWrite(14,0);
  pinMode(5, OUTPUT); //norm light     (YELLOW)  LIGHT1
  digitalWrite(5,0);
  pinMode(32, OUTPUT);  //low light     (PURPLE)  LIGHT2
  digitalWrite(32,0);
  pinMode(25, OUTPUT);  //high light     (RED)     LIGHT3
  digitalWrite(25,0);
  //pinMode(27,INPUT);  //leak detect     (BIG BLUE)  LEAK A0
  pinMode(15, OUTPUT);  //tank pump relay (BROWN/GREY)  SILVER
  digitalWrite(15,0);
  
  pinMode(39,INPUT);  //Battery voltage Analog input
  pinMode(36,INPUT);  //USB voltage  Analog input

}

bool Ato::doAto(){
    bool retVal = false;
   
    
    int pin = digitalRead(NORMAL_SENSOR);

    if(pin == 1){
        digitalWrite(RO_PUMP,HIGH);
    }else{
        digitalWrite(RO_PUMP,LOW);
    }
    return retVal;
}