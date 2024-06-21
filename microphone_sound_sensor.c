/*
    Project name : ESP8266 Microphone sound sensor module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-microphone-sound-sensor-module
*/

const int soundSensorPin = A0; // Analog pin connected to the sound sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog voltage from the sound sensor
  int sensorValue = analogRead(soundSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Sound Sensor Value: ");
  Serial.println(sensorValue);

  // Add a delay before the next reading
  delay(1000);
}
