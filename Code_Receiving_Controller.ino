int LedPin=7;
int buttonNewValue=1;
int buttonOldValue=1;
int ledState=0;//indicate if LED is on =1 or off =0
int delayTime=250;

void setup()
{
  pinMode(LedPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){// once the data is received from the other controller in the buffer this if statement will execute
   buttonNewValue=Serial.parseInt();//the received data is converted from string to an int 
      
    
  if(buttonOldValue==1&&buttonNewValue==0){//if the button is clicked buttonNewValue=0 Else it will equal 1 and will not enter the if statement
  
    if(ledState==0){//if the LED is off, turn it on. And update LedState 
    digitalWrite(LedPin,HIGH);
      ledState=1;
    }
    else if(ledState==1){//else if the LED is on, turn it off. And update LedState 
      digitalWrite(LedPin,LOW);
       ledState=0;
    }
    
  }
    

  }

  delay(delayTime);
 
}