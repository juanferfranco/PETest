/*  
 * Prueba piratuino
 *
 * Sensores reflex
 * Iz => D11
 * Ce => D12
 * De => D8
 *
 * De luz
 * LIz => A0
 * LDe => A1
 *
 * Llama
 * Fr => A2
 *
 * Control Motores
 * DIR_M_A => D4
 * PWM_M_A => D5
 * DIR_M_B => D6
 * PWM_M_B => D7 
 */

unsigned char motorState = 0;
unsigned char motorPower = 128;

const int STOPDELAY = 50;

void setup() {
  //reflex
  pinMode(11,INPUT);
  pinMode(12,INPUT);  
  pinMode(8,INPUT);  
  pinMode(4,OUTPUT);  
  pinMode(5,OUTPUT);  
  pinMode(6,OUTPUT);  
  pinMode(7,OUTPUT);  
  //

  Serial.begin(9600);
  Serial1.begin(9600);
  
  
  // put your setup code here, to run once:

}

void loop() {
  unsigned char serialData;
 
  if(Serial1.available() > 0){
    serialData = Serial1.read();;
    if(serialData >= '1' && serialData <= '5'){
      switch(serialData){
        case '1':
          motorPower = 50;
        break;
        case '2':
          motorPower = 100;
        break;
        case '3':
          motorPower = 150;
        break;
        case '4':
          motorPower = 200;
        break;
        case '5':
          motorPower = 255;
        break;
      }
    }
    else
    {
      motorState =  serialData;
    }
       
    
    switch(motorState){
      case 'F':
        stopMotors(); 
        delay(STOPDELAY);
        analogWrite(5,motorPower);
        analogWrite(6,motorPower);
        digitalWrite(4,1);
        digitalWrite(7,1);
        Serial.println(F("Adelante"));
      break;
  
      case 'B':
        stopMotors(); 
        delay(STOPDELAY);
        analogWrite(5,motorPower);
        analogWrite(6,motorPower);
        digitalWrite(4,0);
        digitalWrite(7,0);
        Serial.println(F("Atras"));
      break;
  
      case 'R':
        stopMotors(); 
        delay(STOPDELAY);
        analogWrite(5,motorPower);
        analogWrite(6,0);
        digitalWrite(4,1);
        digitalWrite(7,0);
        Serial.println(F("Derecha"));
      break;
  
      case 'L':
        stopMotors(); 
        delay(STOPDELAY);
        analogWrite(5,0);
        analogWrite(6,motorPower);
        digitalWrite(4,0);
        digitalWrite(7,1);
        Serial.println(F("Izquierda"));
      break;

      case 'S':
         stopMotors(); 
      break;
      
      default:
        stopMotors();    
      break;
      
    }
  }
  delay(10);
  // put your main code here, to run repeatedly:
}

void stopMotors(){
  analogWrite(5,0);
  analogWrite(6,0);
  digitalWrite(4,0);
  digitalWrite(7,0);
  Serial.println(F("Detenido"));

}

