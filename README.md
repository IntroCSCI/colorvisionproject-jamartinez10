#  Detecting Sight Disturbances

## Description

The program prompts the user for a specific color and its RGB values. It determines what color is predominant in that color and asks the user if they have trouble looking at that color. Depending on what the user's response is data is stored in a separate file and the user is asked if they want to enter another color. This process repeats until the user says they don't want to enter another color.

## Developer

Jessica Martinez

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
What is your name
Jessica

Please enter the rgb values for your color

Enter a Red value between 0 to 255
456
Enter a Red value between 0 to 255
25
Enter a Green value between 0 to 255
56
Enter a Blue value between 0 to 255
25

This color is primarily green if you see a different color then you might have trouble with it.
Do you have trouble looking at this color?
yes

Do you want to enter another color?
no 
The user tends to have more trouble with colors that contain more green
Open the first picture in the potential colors folder on the left side of your screen, if you don't see a color that is primarily green then you for sure struggle with green colors
```

## C++ Guide

### Variables and Data Types

Initially I declared the int variables red, green, and blue in order to store the numeric value of each color that the main color contains. I also declared some string variables called majorColor userResponse, text and repeat. MajorColor stores the color that is predominant in the color given by the user. userResponse stored whether the user has trouble with the color or not. Repeat just like userResponse stores a "yes or no" answer that determines whether or not to repeat the program and ask for another color.


### Input and Output

Some output in this program is mainly when we are asking the user things so they can input information. One of these ocassions is when we ask the reader to "Enter a Red value between 0 to 255" and then the users input is taken into a variable called red.

### Decisions

Some of the major Decisions that were used are if statements that helped the color values stay within the range that is needed which is 0 to 255. Another main way that decisions are used are when the user is asked a yes or no question such as "do you have trouble looking at this color", if the user says yes there is a chunk of code that takes place but if the user says no then something different happens.

### Iteration

There are a lot of iterations in this program such as when the user inputs a wrong thing they are prompted to input their answer again.
One of the most important iterations is the first "do-while" loop that contains the whole program. It allows the program to run at least one time and then the user is prompted with "do you want to enter another color?" if the user says yes then the program runs again until the user inputs something other than yes for that question.


### File Input and Output

This program is using file input in order to store information about the user. The user is asked if they have trouble with the specific color they provided and if the say yes using an "if" statement the program stores that the user has problem with that color and writes the values for red, green, and blue that were previously provided by the user thus helping us keep track of the colors they have trouble with and those they don't.

# v0.2 Updates
The program prompts the user for a specific color and its RGB values. It determines what color is predominant in that color and asks the user if they have trouble looking at that color. Depending on what the user's response is data is stored in a separate file and the user is asked if they want to enter another color. This process repeats until the user says they don't want to enter another color. While doing so the program takes into account what colors the user is struggling more with and tells the user that they struggle more with a specific color. After doing so the program prompts the user to open the folder on the left and to use one of those given colors if the user does indeed have a problem with the given color then it is confirmed that the user has some kind of trouble looking at colors. Potentially since we are now able to know if the user has trouble with some colors we will be able to select those colors in a file and flag them as troubling for the user.

### Arrays/Vectors
The vector used in this program is called problematicColor and it stores the colors that the user has problems with in order to keep track of what the user struggles with. The vector is then used in order to figure out if the user does have some sort of color blindness.

### Functions
The function getColor, getMajorColor, and findMostProblematic were created in order to make the whole program cleaner and more understandable. The function getColor is used in order to ask the user for all the rgb values that make up one color. It takes three ints that are the red, green, and blue values and passes them by reference. This is done by reference because the values of these colors need to change permanently inside int main.