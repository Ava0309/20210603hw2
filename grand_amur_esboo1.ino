// C++ code
//
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 246
#define NOTE_G4 415
#define NOTE_F4 369
#define NOTE_E 329

void setup()
{
  
  int ledPin[]={
    2,3,4,5,6,7,8,9 
  };
  for(int lednum=2;lednum<10;lednum++){
    pinMode(lednum,OUTPUT);
 
  }
  
}


int melody[]={
  NOTE_G4,NOTE_F4,NOTE_E , NOTE_B3, NOTE_E,NOTE_F4,NOTE_G4,
  NOTE_E,NOTE_E3,NOTE_G3,NOTE_A3,NOTE_F3};
int noteDuration[]={
  4,4,4,4,4,4,4,4,4,4,4,4
};
void loop()
{
  int ledPin[]={
    2,3,4,5,6,7,8,9 
  };
  int thisNote;    
  int ledState;   
  int noteDurations;
  
  for(thisNote=0;thisNote<12;thisNote++){
    
    noteDurations=1000/noteDuration[thisNote];
    tone(10,melody[thisNote],noteDurations);
   if(melody[thisNote]==NOTE_G4){
    digitalWrite(ledPin[0],HIGH);
	ledState=ledPin[0];
  	}else if(melody[thisNote]==NOTE_F4){
   	 digitalWrite(ledPin[1],HIGH);
     ledState=ledPin[1];
    
    }else if(melody[thisNote]==NOTE_E ){
    	digitalWrite(ledPin[2],HIGH);
   	   ledState=ledPin[2];
  
  }else if(melody[thisNote]==NOTE_B3){
    digitalWrite(ledPin[3],HIGH);
    ledState=ledPin[3];
  }else if(melody[thisNote]==NOTE_E3){
     digitalWrite(ledPin[4],HIGH);
    ledState=ledPin[4];
  }else if(melody[thisNote]==NOTE_G3){
    digitalWrite(ledPin[5],HIGH);
    ledState=ledPin[5];
  }else if(melody[thisNote]==NOTE_A3){
    digitalWrite(ledPin[6],HIGH);
    ledState=ledPin[6];
  }else if(melody[thisNote]==NOTE_F3){
    digitalWrite(ledPin[7],HIGH);
    ledState=ledPin[7];
  }	
 
  int PauseBetweenNote=noteDurations*1.3;
    delay(PauseBetweenNote); noTone(10); 
     digitalWrite(ledState,LOW);	//delay(100);
  }
   
    delay(200);
}