# Led Cube 3x3x3 

## Objective : ##
Project aiming at the realization of a decorative object. Using the color of the leds to create animations.

## Materials used : ##
-	27 red leds, 
-	9 resistors of 220 Ohm to adjust the voltage of the arduino board
-	3 resistors of 22 k Ohm 
-	3 transistors
-	Arduino card

## Principle : ##
A led lets the current pass only in one direction, we light it by feeding its cathode (longest branch) and by connecting its anode to the ground.

In the led cube, all the anodes are common to each floor and the cathodes are common to each column. To switch on a led, you just have to power the selected column and to control the transistor in order to connect the led stage to the ground.
<p align="center">
  <img src="Images/schéma1.jpg">
</p>

However, this arrangement can lead to undesired effects. For example when you want to light 2 leds with 2 different stages and columns, 2 more leds are powered by default.
<p align="center">
  <img src="Images/schéma2.jpg">
</p>
It is therefore not preferable to order several leds at the same time.
The trick of the system is to never switch on more than one led at the same time while having a sufficiently high frequency of lighting in order to finnish the human eye. Indeed, by making a led blink with a frequency higher than the human eye (higher than 85 Hz), it seems that the led is normally lit. 
We can thus realize different figures with the leds while circumventing the problem. 

### *Project completed in 2018*
