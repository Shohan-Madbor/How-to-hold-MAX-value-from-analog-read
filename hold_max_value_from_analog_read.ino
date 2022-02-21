const int pot = A0;
int potval = 0;
int maximum = 0;


void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  potval = analogRead(A0);

  if(potval > maximum){
      maximum=potval;    
  }

  Serial.println(maximum);

  delay(30);
}
