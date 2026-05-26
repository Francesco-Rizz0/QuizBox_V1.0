# How to assemble the QuizBox
## Step 1: Programming the MCU
### Prepare the set up
Fit the Arduino Nano in the breadboard with the male pins that were already soldered on the board, so that it won't move. Connect the Board to your computer using the USB A to USB Mini-B cable 
and open the Arduino IDE software. 
### Program the board
Create a new project and import the source code I have provided in this repository in the built-in text editor. Select the correct COM port and board type (in this case Arduino Nano ATMega328p, choose old bootloader if the
board is not original) and press the Program button to burn the program on the board. Once you have programmed the board, disconnect it from the computer.
## Step 2: Connect the components
### Connect power rails
This project utilises the power delivered by the usb connector of the board, so connect the 5V pin of the board to the positive power rails and the GND pin to the negative power rail. This will facilitate 
the connection made to power the components.
### Connect potentiometers and other components
With the USB port of the board facing the left edge of the breadboard, put the pontentiometer on the opposite side from the port facing the power rail closer to you. 
The potentiometer needs to bet fitted in the line closer to you (not the power rail) so that the three pins of it would occupy the first, third and fifth pin ftom the right. Once you have done this, connect all the
components (except the buttons) with the proper jumper wires as shown in the 
electronic schematic provided in this repository.
### Connect the buttons
Now, fit the buttons on the lid (don't worry if they struggle to get in, it's designed to have a tight fit) and connect them to the breadboard us female to male header jumper as shown in the schematic, attaching the wires
to the opposite perpendicular button pins (Example: if you have attached a wire to the top-right pin, attach the other to bottom-left pin). The two buttons close together should be used at the ***SW_ANSW*** switches, while
the other button should be used as the ***SW_RST*** switch (see the schematic).  
**Note:** if you posses a soldering iron and the skills to use it, you could instead cut in half three male to male header jumper wires, strip the end that you have cut and solder it tho the button instead of connect it 
with the female to male header jumper wires, so that you have a stronger and more stable connection.
## Step 3: Assemble the QuizBox and test it
### Attach the screen to the lid
With the pins of the screen facing away from the buttons, attach the screen to the lid using four screws and a screw driver. Continue torquing the screws until the screen can non longer move. 
### Put in the components
Once you have secured the screen and the buttons to the lid, you can put in the breadboard with all the componentsin the box with the port of the Arduino Nano facing the rectangular opening on the shorter side of the box.
Be carefull when introducing the breadboard int the box to not disconnect the wires connections. You should also bend the pontentiometer backwards a bit until the breadboard is all the way in and then bend it back up
so that it fits in the small opening on the larger side of the box.
