#define LED 2

void setup() {
	pinMode(LED, OUTPUT);
	
}

// the loop function runs over and over again forever
void loop() {

	digitalWrite(LED,HIGH);
	delay(2000);
	digitalWrite(LED, LOW);
	delay(2000);


}
