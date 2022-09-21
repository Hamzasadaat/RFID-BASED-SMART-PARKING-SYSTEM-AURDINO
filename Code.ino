#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define SS_PIN 10
#define RST_PIN 9 
#define SS_PIN 10
#define RST_PIN 9
#define LED_G 4 //define green LED pin
#define LED_R 5 //define red LED
#define BUZZER 2 //buzzer pin
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
Servo myServo; //define servo name
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  myServo.attach(3); //servo pin
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the   128x64)
  myServo.write(0); //servo start position
  pinMode(LED_G, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);
  Serial.println("Put your card to the reader...");
  Serial.println();
  display.clearDisplay();
  display.display();
  display.setTextColor(WHITE); // or BLACK);
  display.setTextSize(1);
  display.setCursor(30,0);
  display.print("UOH ");
  display.print("Parking Sys ");
  display.println("Scan Your Card");
  display.clearDisplay();  
  display.display();
  display.startscrollright(0x00, 0x00);

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "75 4E BD 2A") //change here the UID of the card/cards that you want to give access
  {
    display.clearDisplay();
    display.display();
    display.setTextColor(WHITE); // or BLACK);
    display.setTextSize(1);
    display.setCursor(30,0);
    display.print("UOH ");
    display.print("Parking Sys ");
    display.print("Access Granted");
    display.print("\n\nWelcome AKP: 205");
    display.display();
    display.startscrollright(0x00, 0x00);
    display.setTextSize(1);
    display.setCursor(0,20);
    display.display();
    display.clearDisplay();
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 500);
    delay(300);
    noTone(BUZZER);
    myServo.write(180);
    delay(5000);
    myServo.write(0);
    
  }
 else if (content.substring(1) == "95 04 53 63") //change here the UID of the card/cards that you want to give access
  {
    display.clearDisplay();
    display.display();
    display.setTextColor(WHITE); // or BLACK);
    display.setTextSize(1);
    display.setCursor(30,0);
    display.print("UOH ");
    display.print("Parking Sys ");
    display.print("Access Granted");
    display.print("\n\nWelcome IDT: 2272");
    display.display();
    display.startscrollright(0x00, 0x00);
    display.setTextSize(1);
    display.setCursor(0,20);
    display.display();
    display.clearDisplay();
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 500);
    delay(300);
    noTone(BUZZER);
    myServo.write(180);
    delay(5000);
    myServo.write(0);
    
  }
  else if (content.substring(1) == "D2 89 AC 1B") //change here the UID of the card/cards that you want to give access
  {
    display.clearDisplay();
    display.display();
    display.setTextColor(WHITE); // or BLACK);
    display.setTextSize(1);
    display.setCursor(30,0);
    display.print("UOH ");
    display.print("Parking Sys ");
    display.print("Access Granted");
    display.print("\n\nWelcome IDK: 3154");
    display.display();
    display.startscrollright(0x00, 0x00);
    display.setTextSize(1);
    display.setCursor(0,20);
    display.display();
    display.clearDisplay();
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 500);
    delay(300);
    noTone(BUZZER);
    myServo.write(180);
    delay(5000);
    myServo.write(0);
    
  }
 else   {
    
    display.clearDisplay();
    display.display();
    display.setTextColor(WHITE); // or BLACK);
    display.setTextSize(1);
    display.setCursor(30,0);
    display.print("UOH ");
    display.print("Parking Sys ");
    display.print("\nAccess Denied");
    display.print("\n\nContact Admin");
    display.display();
    display.startscrollright(0x00, 0x00);
    display.setTextColor(WHITE); // or BLACK);
    display.setTextSize(1);
    display.setCursor(24,7);
    display.display();
    display.clearDisplay();
    Serial.println(" Access denied");
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 300);
    delay(1000);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
    
  }
} 
