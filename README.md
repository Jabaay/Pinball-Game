# NOT PinBox 3000 BUT SOMETHING BETTER
An embedded system that modifies a cardboard pinball machine into an electrical game with "pinball-like" features. <br><br>

By: Rajeev, Liam, Vince and Jiabei <br><br>

## Pinball Machine Features:

**Ball Launcher** - Will be a spring-loaded mechanical system.

**Ball Flippers** -  Mechanical flippers using solenoids or Arduino-controlled servo motors.

**Hittable Pins** - Pins must detect each hit so we will likely use a vibration sensor of some sort to detect. We can have a range for how many points are awarded for how hard each ball is hit as well.

**Start, On/Off Button** - A simple button that can start or reset the game state, along with another button/switch that turns the machine on and off.

**Digital Display of Score** - Pins must communicate with the digital display to display the points properly. Thinking of using some sort of LCD display in order to do this. This screen may also display prompts for the current player.

**A Robot that obstructs ball movement** - A simple robot that will move back and forth on the field of play in order to disrupt the ball movement. Thinking of using a wheel system built in under the board in order to execute this. 

**Sound System** - Will play songs based on the theme of the board, with adjustable volume based on the supplied voltage.

**Target Switch** - Either every 30 seconds or every time a certain obstacle is hit, the point values for various targets will switch. This will increase the necessary skill and replayability of the machine.

**Light System** - LED displays to help decorate the board which lights up based on how well the user is playing. More points will mean more LEDs light up. 

We will implement the design using 2-3 Arduino Rev3 boards which will communicate with each other, most likely through hardwiring.

