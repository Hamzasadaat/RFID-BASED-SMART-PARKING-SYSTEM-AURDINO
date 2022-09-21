# RFID-BASED-SMART-PARKING-SYSTEM-AURDINO

For Proper Working of system Visit https://youtube.com/shorts/WualsZcqnBk

![IMG-20220919-WA0006](https://user-images.githubusercontent.com/76808385/191520421-1ff7f2ec-b7ad-43b9-a545-20a7a3bdeb68.jpg)

![IMG-20220919-WA0007](https://user-images.githubusercontent.com/76808385/191520494-5c04b1cc-fee1-4cb5-af91-14c9748c800d.jpg)


The main objective is to avoid the cramming in the car parking area by implementing an efficient car parking system along with a user-friendly application for an ease of use. Today, parking is the main coordinator between the land use and transportation. As the urban population is increasing, more and more cars are circulating through the city in search for parking spaces, often contributing to the global problem of traffic congestion.

![image](https://user-images.githubusercontent.com/76808385/191502571-abe55386-7520-408e-965f-7108cdca7002.png)

# Figure 1.1:Project Block Diagram

![image](https://user-images.githubusercontent.com/76808385/191502692-dc873220-a47a-460d-a3ff-e474e01df613.png)

# Figure 1.2: Logic of Project Block Diagram

![image](https://user-images.githubusercontent.com/76808385/191502733-dcfb4cc2-4820-441f-9016-e55e3e13a984.png)

# Hardware Requirements:
The proposed system is planned/created by taking in view every one of the disadvantages and impediments of the current system and in this way, we expect to make it a client focused system to satisfy every one of the targets of the current system in a sound manner.
Our proposed system "Smart RFID Parking System", comprises of the accompanying equipment parts:
# 3.5.1 LED (Red):

![image](https://user-images.githubusercontent.com/76808385/191503046-dcb34ba6-ce48-4e88-82d9-e92f0e726113.png)

If any unknown card is used in the device, then this red LED will light and the barrier will not open.
#Figure 3.4: Red LED 3.5.2 LED (Green):

![image](https://user-images.githubusercontent.com/76808385/191503068-47af5edd-4faa-4756-b2a4-ef7ab6380e87.png)

If any known card is used in the device, then this green LED will light and the barrier will open.


These interfacing wires are utilized to lay out the association between different pieces of the circuit.
# Figure 3.6: Connecting Wires 3.5.4.

![image](https://user-images.githubusercontent.com/76808385/191503349-c8a3d5ef-0388-48eb-85bc-69c72af7bc79.png)


The USB link is utilized to interface the system and the Arduino Board USB port. Power will be provided to the board through the actual system and interacting of equipment and programming will occur.
# Figure 3.7: 

![image](https://user-images.githubusercontent.com/76808385/191503361-575ce85d-121f-471f-aef7-73f9e90b821d.png)

# Prototyping Board (Breadboard)

A slender plastic board used to hold electronic parts (semiconductors, resistors, chips, and so on) that are wired together.
#Figure 3.9: Prototyping Board (Breadboard)

![image](https://user-images.githubusercontent.com/76808385/191503412-ab8a5225-36ea-47c3-86f6-b809638992d7.png)

3.5.6 Arduino UNO
The Arduino UNO is the best board to begin with gadgets and coding. Arduino UNO is a microcontroller board in view of the ATmega328P. It has 14 computerized input/yield pins (of which 6 can be utilized as PWM yields), 6 simple sources of info, a 16 MHz clay resonator, a USB association, a power jack, an ICSP header and a reset button.
# Figure 3.10: 
![image](https://user-images.githubusercontent.com/76808385/191503466-a303039e-e9c5-403a-8fe0-a0d4791d9b93.png)

# Arduino UNO.
3.5.7 Servo Engine
A servo engine is a sort of engine that can turn with incredible accuracy. It is comprised of a basic engine which goes through a servo system. In the event that engine is controlled by a DC power supply, it is called DC servo engine, and on the off chance that it is AC-fueled engine, it is called AC servo engine.
It consists of three parts:
• Controlled device
• Output sensor
• Feedback system
# Figure 3.11:
![image](https://user-images.githubusercontent.com/76808385/191503488-99b2638f-9359-429f-872e-bb8d70fbced9.png)
Servo engine

# 3.6 Software Requirements:
The software requirements for the proposed project are following: 3.6.1 Arduino IDE
The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, macOS, Linux) that is written in capacities from C and C++. It is utilized to compose and transfer projects to Arduino viable sheets, yet additionally, with the assistance of outsider centers, other seller improvement sheets. The Arduino Integrated Development Environment - or Arduino Software (IDE) - contains a text editor for writing code, a message area, a text console.
The open-source Arduino Software (IDE) makes it easy to write code and upload it to the board. An integrated development environment (IDE) is software for building applications that combines common developer tools into a single graphical user interface (GUI).
IDE's can be used to create software applications, drivers and utilities. It allows developing software in any programming language without spending much time on language syntax. IDE has the ability to correct syntaxes, gives a warning about memory leaks, assist in writing quality of code, etc.

![image](https://user-images.githubusercontent.com/76808385/191503561-5a1c26b8-16b0-44e1-87fa-dab684f935b6.png)

# 3.8 System Architecture
1. A vehicle will maneuver into an entry path until it can go no further in light of the fact that the entry door is shut
2. At this point, client should distinguish himself/herself utilizing a substantial RFID Tag.
3. Information for RFID label clients will be put away in data set at the hour of designation of RFID tag, by utilizing Arduino UNO.
4. If the vehicle proprietor having a substantial RFID tag, the RFID reader will understand tag and store information of client in data set.
5. The hindrance will be open for vehicles on the recognition of substantial RFID labels.

![image](https://user-images.githubusercontent.com/76808385/191503622-35e4f61d-4f0e-45db-b5d4-3b58913a0320.png)

# 3.8.2 Assembled System:
![image](https://user-images.githubusercontent.com/76808385/191503660-cc0daa65-85c3-4f04-b934-1ab0f19f32ab.png)

![image](https://user-images.githubusercontent.com/76808385/191503821-2423e381-f227-4e7b-8eba-efcff9a05e9a.png)


