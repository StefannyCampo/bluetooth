char NOMBRE[15] = "DISPENSADOR";
char BPS = '4';

char PASSWORD[5] = "0000";


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);

  Serial.print("AT");
  delay(1000);

  Serial.print("AT+NAME");
  Serial.print(NOMBRE);
  delay(1000);

  Serial.print("AT+BAUD");
  Serial.print(BPS);
  delay(1000);

  Serial.print("AT+PIN");
  Serial.print(PASSWORD);
  delay(1000);
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(500);

}
