// SRS 8: multiple simultaneously active stack frames.
// Change initial level to 0, 1, 2, 3, 4, restarting after each trial.
// Run ONLY in Wokwi.
volatile int controlSum = 0;

__attribute__((noinline))
void memoryHog(uint8_t level) {
  volatile int buffer[300]; // On Arduino Uno, 300 * 2 = 600 bytes.

  for (int i = 0; i < 300; i++) {
    buffer[i] = i + level;
  }

  Serial.print("level = ");
  Serial.println(level);

  if (level > 0) {
    memoryHog(level - 1);
  }

  controlSum += buffer[level];
}

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("MEMORY HOG START");
  memoryHog(4); // First run with 0, then 1, 2, 3 and 4.
  Serial.println("MEMORY HOG FINISH");
}

void loop() {}
