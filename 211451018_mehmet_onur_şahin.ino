#define Ldr A0
int Isik_siddeti = 0;
void setup() 
{ 
Serial.begin(9600);
pinMode(A0,INPUT);
} 
void loop() 
{ 
int Isik_siddeti = analogRead(Ldr);
Serial.println(Isik_siddeti); 
}
