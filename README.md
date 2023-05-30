# VenturerSimpleControl
I trashpicked a Venturer TV with no remote. So I built one! (Model PLV7122)

This particular TV was missing its remote and its side-panel buttons were busted, so there was no way to control it otherwise.
I used the opportunity to take a deep dive into the IR protocol that remotes use and ended up brute-forcing the codes for this TV.
Once I had it mostly figured out I connected a couple of buttons to the Arduino and I use them as power and source. 
I installed the TV on my desk as a monitor, and the arduino underneath in a cheap plastic case. For most things I use the TV for it is a single button press away.
I added a serial interface so I can do more complicated stuff like setting options in the TV, but it is a bit tedious.
This code represents the current code deployed on the Arduino. It isn't pretty, but it is what it is.

## Hardware Requirements
- Arduino board
- IR LED
- LEDs (optional)
- Resistors to limit current (220 ohm are usually fine)
- Breadboard and jumper wires

## Installation
1. Connect the IR LED to the Arduino board. Connect the IR LED in series with an appropriate resister and either point it at the TV or run a long set of wires and tape it to the TV like I did.
2. Connect the LEDs (if used) to the appropriate pins on the Arduino board.
3. Connect the power and source buttons to the appropriate pins on the Arduino.
4. Upload the Arduino code provided in the [VenturerSimpleControl.ino](VenturerSimpleControl.ino) file to your Arduino board
5. Maybe make a nice case for the remote?

## Usage
1. You can get basic control over the TV by pressing the power or source buttons. 
2. You can also control the device by sending commands or specific IR codes using the serial monitor:
   - Commands: up, down, left, right, vup, vdown, menu, input, power, ok, help.
   - To send a custom IR code, enter the 32-bit hex value (e.g., "0x20DFE21D") in the serial monitor.

## Troubleshooting
- If the IR remote control commands are not working properly, check the connections and ensure that the IR LED is emmitting light. I added a red LED in parallel so I can tell when it should be emmitting light. Some phone cameras and some webcams can see infrared light.
- Make sure that the IR codes in the code match the codes sent by your specific remote control. You can use the `IRrecvDump` example from the IRremote library to capture the codes from your remote control and update the code accordingly.
- Note that Venturer makes (or rebrands) a tonne of TVs and there are many variations on the codes they use. I had to reverse engineer mine as none of the ones I found online worked.
- The specific model I am using is PLV7122

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgements
- This project uses the [IRremote library](https://github.com/Arduino-IRremote/Arduino-IRremote) for IR communication.
