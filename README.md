# comp140-gam160-game
## Description of the game
The game will be a "hacking" game in which the player has to solve various puzzles in order to progress. For the initial prototype there will be three puzzles the player will have to solve. When the player has completed the final puzzle the clock will stop and the player can see how much time it took. The idea is that the player will have to complete the puzzles as quickly as possible to get the lowest time they can. The puzzles themselves will be rather basic and two dimensional but the way the puzzles are solved will change a lot between each. 
## Core Mechanics
The mechanics in this game have been based heavily around the idea of the unique controller.

The first puzzle will be turning four cubes till they all light up green. It will work in a similar way as lock-picking does in the game Skyrim. The colour of the cube will change depending on how close it is to the correct position. More red equals further away while green equals close. When the player gets the cube close enough it will lock into position so they no longer have to worry about it. When all four cubes have been locked then the puzzle is completed and the game will move on to the next puzzle.
![alt text](https://raw.githubusercontent.com/Phil-Sparkes/comp140-gam160-game/master/Puzzle1.png "Puzzle1")
The second puzzle will be a typing one. The player must type the word "hack" (subject to change) as quickly as possible. The hard part about this is finding the letters. The player must turn joysticks to try and find the letter. Once they have found the right letter they can lock it in and move onto the next letter. Once the player inputs all four correct letters the puzzle will be complete.
![alt text](https://raw.githubusercontent.com/Phil-Sparkes/comp140-gam160-game/master/Puzzle2.png "Puzzle2")
The last puzzle will have the player moving four different "files" to the extraction point. It is a maze in which the player has to control four different objects at once. When all the files have reached the extraction point then the puzzle is complete and the screen with the final time will be displayed.
![alt text](https://raw.githubusercontent.com/Phil-Sparkes/comp140-gam160-game/master/Puzzle3.png "Puzzle3")
# Controller
The controller will be a panel on the users wrist. The panel will have five analog joysticks that are wired up to an arduino beneath it. The arduino will also have a wire connecting it to a computer.

When thinking about the design of the controller I first thought about making a glove controller but to make one that functions well seems beyond the scope of this project. I decided instead to go with a five analog joystick approach to give a similar feel to a glove controller while not being as complex. After conducting research I couldn't find any controllers that used analog joysticks in such quantity.

The idea behind the five joysticks is that the player will have one finger/thumb on each joystick giving it full five finger control. Having the player have this device on their wrist was designed to add to the "hacker" feeling. A portable hacking device. Also it makes it much harder for the player to cheat and use two hands. 

![alt text](https://raw.githubusercontent.com/Phil-Sparkes/comp140-gam160-game/master/Design.jpg "Design")
# Research
While conducting research on existing controllers I was not able to find any that had more than two analog joysticks but was able to find some with interesting ways of controlling what was on the screen. Also seeing as I wanted my controller to have similar functionality to existing glove controllers I wanted to have a look at some of these.
### Sweep fighters - http://shakethatbutton.com/sweep-fighters/
Sweep fighters is a 2D fighting game played using a graphics tablet. I found the graphics tablet to be an interesting idea for controlling the game as it is very different from conventional methods.  
### Runners - http://shakethatbutton.com/runners/
This game is using three mice to play three different instances of a game. Three mice controlling three different characters is similar to my idea. The problem with this game though is they had to attach the mice to each other so although there is three mice you move them all together taking away from the concept in my opinion. With joysticks I believe the player will be able to control each one independently of each other.
### Overwatch glove Controller - http://shakethatbutton.com/overwatch-glove-controller/
This controller is using the glove idea with eight buttons attached to the glove in different places. The player has to move their hand in different ways to push the buttons. The way the player has to move their hand and make use of every finger is something that interested me here. With my design I want a similar result.
### Bionic Roshambo - http://shakethatbutton.com/bionic-roshambo/
Bionic Roshambo is also using a glove controller idea but using three basic gestures. Rock, Paper, Scissors. This controller interested me with the idea of the gestures giving the input to the game.
### Virtual Reality Glove - https://www.neurodigital.es/avatarvr/
With virtual reality starting to take off many companies have been looking at better controller devices for the systems. Gloves have been an idea floating about for a while. Giving the player complete control of their hands in the virtual reality world will open up many different possibilities. For my project I want to make something similar to this but on a much smaller scale. Having a controller that takes input from all your fingers at once is what I will try and achieve.
