#define echoPin 5
#define trigPin 4

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void myfunction(){

}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration=pulseIn(echoPin,HIGH);
  
  distance=(duration*0.034/2);
  
 int sample = 10;
 int sence = 0;
 
   for(int i=1; i<=sample; i++){
    sence += distance ;
    delay(50);
  }

  int average = sence / sample;
  Serial.print("Distance= ");
  Serial.print(average);
  Serial.println(" cm ");
  delay(200);
  Serial.flush();
               
}
