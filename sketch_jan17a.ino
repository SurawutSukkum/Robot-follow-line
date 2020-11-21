//Motor L298
#define MOTOR_L_A 4
#define MOTOR_L_B 5
#define MOTOR_R_A 6
#define MOTOR_R_B 7

//Sensor HC-SR04
#define echoPin 3 // Echo Pin
#define trigPin 2 // Trigger Pin
#define LEDPin 13 // Onboard LED
long duration, distance; // Duration used to calculate distance

void setup() {
 //set up motor
 pinMode( MOTOR_L_A ,OUTPUT);
 pinMode( MOTOR_L_B ,OUTPUT);
 pinMode( MOTOR_R_A ,OUTPUT); 
 pinMode( MOTOR_R_B ,OUTPUT);

 //set up sensor
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT); 

 stop();
}

void loop() {
 
 if(distance_read() < 15  )
  {
     stop();
     delay(100);
     backward();
     delay(1000);
     right();
     delay(2000);
     stop();
  }
 else{
 forward();
 }
 
 }

