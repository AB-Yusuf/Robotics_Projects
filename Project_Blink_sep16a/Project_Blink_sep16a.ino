int led = 13;
//Initialise a pin numbered 13 to variable led

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  //  Set your initaialise variable(pin13) to an 
  // Output one, giving a volts of 3v OR 5V

}

void loop() {
  // put your main code here, to run repeatedly:

  //Type in commands into the pin

  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);

}
