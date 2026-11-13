void setup() {
  Serial.begin(115200);
  delay(500);

  for (uint32_t i = 0; i <= 10000; i++) {
    if (i % 1000 == 0) {
      Serial.println(i);
    }
  }

  Serial.println("SAFE FINISH");
}

void loop() {}
