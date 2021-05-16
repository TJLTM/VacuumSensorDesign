int IntervalInSeconds = .25;
long LastMillis = 0;
int NumberOfReadings = 25; //Number of ADC Readings that will be taken and averaged 
int Center = 512; //This value defines the 0 (Zero) reading on the sensor this is VRef setting

void setup() {
  Serial.begin(115200);
  analogReference(DEFAULT);
}

void loop() {
if (abs(millis() - LastMillis) > IntervalInSeconds*1000)
  {
  int Sum = 0;
  for (int i=1; i <= NumberOfReadings; i++){
    Sum = Sum + analogRead(A5); 
  }
  /* If calibrated correctly we will have an approx linear equation for the output.
   *  Since my brain works mostly in US Imperial Units I derived this for PSI units 
   *  I Have included a function below to convert this to Metric. just comment out 
   *  the line for the value you don't want. 
  */ 
  float Value = (-0.05871*(Sum/NumberOfReadings))+30.05871;
  Serial.print("Vacuum Reading: ");
  Serial.println(Value); // Imperial Output
  //Serial.println(ConvertPSItoKPa(Value)); // Metric Output
 
  LastMillis = millis(); //Last time displayed update
  }
}

float ConvertPSItoKPa(float PSI) {
  float KPA = 6.8947572932 * PSI;
  return KPA;
}
