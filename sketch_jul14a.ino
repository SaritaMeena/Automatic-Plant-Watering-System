//If the soil is dryer than this number,then start watering
const int dry = 270;
const int pumpPin = 12;
const int soilSensor =A4;
void setup(){
  pinMode(pumpPin, OUTPUT);
  pinMode(soilSensor, INPUT);
  Serial.begin(9600);
  digitalWrite(pumpPin, HIGH);
  delay(5000);
}
voidloop(){
  //read current moisture
  int moisture = analogRead(soilSensor);
  Serial.println(moisture);
  delay(5000);
  if(moisture>=dry){
    //the soil is too dry, water
    Serial.println("Watering starts now... moisture is" + String(moisture));
    digitalWrite(pumPin, LOW);
    //Keep watering for 5 sec
    delay(5000);
    //turn off water
    digitalWrite(pumPin, HIGH);


  }else{
    Serial.println("Moisture is adequate No watering needed "+ String(moisture));
  }
}

  }else{
    Serial.println("Moisture is adequate No watering needed "+ String(moisture));
  }
}