#define PIN_LED 7 // GPIO 7번을 사용

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); 
  while (!Serial) {
    ; // 시리얼 포트 연결 대기
  }
}

void loop() {
  digitalWrite(PIN_LED, 0); 
  delay(1000); // 1초 동안 대기

  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1); 
    delay(100); 
    digitalWrite(PIN_LED, 0); 
    delay(100); //대기
  }
  
  while (1) {
    digitalWrite(PIN_LED, 1); 
    ; //infinite loop
  }
}
