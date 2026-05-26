# How to assemble the QuizBox
## Step 1: Programming the MCU
### Prepare the setup
Fit the Arduino Nano in the breadboard with the male pins that were already soldered on the board so that it won't move. Connect the board to your computer using the USB A to USB Mini-B cable 
and open the Arduino IDE software. 
### Program the board
Create a new project and import the source code I have provided in this repository in the built-in text editor. Select the correct COM port and board type (in this case, Arduino Nano ATMega328p; choose Old bootloader if 
the board is not original) and press the Program button to burn the program on the board. Once you have programmed the board, disconnect it from the computer.
## Step 2: Connect the components
### Connect power rails
This project utilizes the power delivered by the USB connector of the board, so connect the 5V pin of the board to the positive power rails and the GND pin to the negative power rail. This will facilitate 
the connection made to power the components.
### Connect potentiometers and other components
With the USB port of the board facing the left edge of the breadboard, put the potentiometer on the opposite side from the port facing the power rail closer to you. 
The potentiometer needs to bet fitted in the line closer to you (not the power rail) so that the three pins of it would occupy the first, third and fifth pin ftom the right. Once you have done this, connect all the
components (except the buttons) with the proper jumper wires as shown in the 
electronic schematic provided in this repository.
### Connect the buttons
Now, fit the buttons on the lid (don't worry if they struggle to get in, it's designed to have a tight fit) and connect them to the breadboard using female to male header jumper wires as shown in the schematic, attaching
the wires to the opposite perpendicular button pins (Example: if you have attached a wire to the top-right pin, attach the other to the bottom-left pin). 
The two buttons close together should be used at the ***SW_ANSW*** switches, while
the other button should be used as the ***SW_RST*** switch (see the schematic).  
**Note:** if you possess a soldering iron and the skills to use it, you could instead cut in half three male to male header jumper wires, strip the end that you have cut and solder it to the button instead of connecting
it with the female to male header jumper wires, so that you have a stronger and more stable connection.
## Step 3: Assemble the QuizBox and test it
### Attach the screen to the lid
With the pins of the screen facing away from the buttons, attach the screen to the lid using four screws and a screw driver. Continue torquing the screws until the screen can no longer move. 
### Put in the components
Once you have secured the screen and the buttons to the lid, you can put in the breadboard with all the components in the box with the port of the Arduino Nano facing the rectangular opening on the shorter side of the box.
Be careful when introducing the breadboard into the box to not disconnect the wire connections. You should also bend the potentiometer backwards a bit until the breadboard is all the way in and then bend it back up
so that it fits in the small opening on the larger side of the box. Now, you can put the lid on top of the box and secure it with four screws, being careful not to tighten them too much as the plastic could easilly
bend and break, especially if you have printed the parts in materials like PLA.
### Power on and test
Now that you have assembled the QuizBox, you can power it on by connecting the USB port of the MCU to your computer or another power source capable of delivering 5 volts. You can now enjoy solving this maths problems to
test your skills. You can start again by pressing the button you have connected to the RESET pin.
## Thanks for your attention
I hope you enjoyed my project and found it fun or useful. Feel free to change the code and reprogram the microcontroller to add other problems to solve. If you have any questions regarding this project, you can contact me 
by writing an email to the address: francescorizzo953@gmail.com. Thank you and see you in my next project!
