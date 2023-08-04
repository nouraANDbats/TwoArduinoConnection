
int buttonPin=7;
int ReadButton;
int delayTime=250;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);// since it is a pull up switch, "1" is the default value.
  Serial.begin(9600);
}

void loop()
{
  
  
  ReadButton=digitalRead(buttonPin);// store the button digital signal in ReadButton
  Serial.write(ReadButton);//send the ReadButton data to the receiving controller
  Serial.println(ReadButton);
  delay(delayTime);
  
  
}