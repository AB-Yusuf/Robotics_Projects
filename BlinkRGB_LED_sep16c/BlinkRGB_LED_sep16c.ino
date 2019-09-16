int redPin = 11;
int greenPin = 10;
int bluePin = 9;


void setup() {
  // put your setup code here, to run once:
  //Set each pin mode to give an output of 5V or 3.5V

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void setColor(int red, int green, int blue) {
  // put your main code here, to run repeatedly:

  //AnalogWrite can be used to light Led at varying brightnesses
  //The function takes the value for brightness
  // The value range: 0 - 255
  
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
  
  
}

void loop()
{
  //Entering the values for each color as an argument
  setColor(255, 0, 0); //red
  delay(500);
  setColor(0, 255, 0); //green
  delay(500);
  setColor(0, 0, 255); // blue
  delay(500);
  setColor(255, 255, 0); //yellow
  delay(5000);
  setColor(80, 0, 80);  //purple
  delay(500);    
  setColor(0, 255, 255); //aqua 
  delay(500);
  setColor(0x4B, 0x0, 0x82); 
  delay(1000);
  
}
