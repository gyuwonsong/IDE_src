int a = 0;

#define PIN7 7
void setup() {
  pinMode(PIN7, OUTPUT);
}

void loop() {
  digitalWrite(PIN7, 0); //1초동안 1번 on
  delay(1000);

  while (a < 5){ //1초동안 5번 off&on 반복
    digitalWrite(PIN7, 1); //off
    delay(100);
    digitalWrite(PIN7, 0); //on
    delay(100);
    ++a;
}
  digitalWrite(PIN7, 1); //LED off
  exit(0); //LED 끈 채로 무한루프 탈출
}
