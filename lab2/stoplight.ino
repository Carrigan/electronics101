int red_light = 1;
// Declare the pins of the yellow and green lights here.

void setup() {
  pinMode(red_light, OUTPUT);
  // Set up the yellow and green lights here
}

void loop() {
  digitalWrite(red_light, HIGH);
  delay(1000);
  digitalWrite(red_light, LOW);
  // Turn on the YELLOW light
  // Turn on the GREEN light
}
