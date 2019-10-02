// pin13 has a default LED connected to it on an Arduino board
int led = 13;


void setup() {
 //The pin is set to give an output 
 pinMode(led, OUTPUT);
 
}

void loop() {
 // put your main code here, to run repeatedly:

 //Type in commands into the pin

 //Switch the pin ON
 digitalWrite(led, HIGH);

 //Allow it to be switched on for a second
 delay(1000);
 
 //Switch the pin OFF
 digitalWrite(led, LOW);

 //Allow it to be awitched off for a second
 delay(1000);

}
