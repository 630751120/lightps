#include <Wire.h>
int redPin= 7;//����7
int greenPin = 6;//����6
//int bluePin = 5;//����5
int Intensity =0;
#define AD5 A5
void setup() {
Serial.begin(9600);
 while (!Serial) {   
; // wait for serial port to connect. Needed for Leonardo only  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
} 
}
void loop() { 
  Intensity = analogRead(AD5);  //��ȡģ���AD5��ֵ������Intensity����
  Serial.print("Intensity = ");  //�������"Intensity = "
  Serial.println(Intensity);     //�������Intensity������ֵ��������
  delay(500);     //��ʱ500ms
if(Intensity>500){//��ֵ��500ʱ������
  setColor(255, 0, 0); // Red Color
  delay(1000);
  setColor(0, 255, 0); // Green Color
  delay(1000);
  //setColor(0, 0, 255); // Blue Color
  //delay(1000);

  //setColor(255, 255, 255); // White Color
  //delay(1000);
  //setColor(170, 0, 255); // Purple Color
  //delay(1000);
  }
  else {
    setColor(0, 0, 0); // black Color
  delay(1000);
    }
}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  //analogWrite(bluePin, blueValue);
}