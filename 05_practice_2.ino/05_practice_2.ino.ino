#define PIN_LED 7 // GPIO 7번을 사용합니다.

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // 시리얼 통신 초기화
  while (!Serial) {
    ; // 시리얼 포트 연결 대기
  }
}

void loop() {
  digitalWrite(PIN_LED, 0); // LED를 켭니다.
  delay(1000); // 1초 동안 대기

  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1); // LED 끄기
    delay(200); // 1초 동안 대기
    digitalWrite(PIN_LED, 0); // LED 켜기
    delay(200); // 1초 동안 대기
  }
  
  while (1) {
    digitalWrite(PIN_LED, 1); // LED 끄기
    ;
  }
}
