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

Please open up the potential color folder and pick from those colors to answer the following questions

Enter a Red value between 0 to 255
119
Enter a Red value between 0 to 255
255
Enter a Red value between 0 to 255
59

This color is primarily green if you see a different color then you might have trouble with it.
Do you have trouble looking at this color?
yes

Do you want to enter another color?
no
```

## C++ Guide

### Variables and Data Types

Initially I declared the int variables red, green, and blue in order to store the numeric value of each color that the main color contains. I also declared some string variables called majorColor userResponse, text and repeat. MajorColor stores the color that is predominant in the color given by the user. userResponse stored whether the user has trouble with the color or not. Repeat just like userResponse stores a "yes or no" answer that determines whether or not to repeat the program and ask for another color.


### Input and Output

Some output in this program is mainly when we are asking the user things so they can input information. One of these ocassions is when we ask the reader to "Enter a Red value between 0 to 255" and then the users input is taken into a variable called red.

### Decisions

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!

### Iteration

There are a lot of iterations in this program such as when the user inputs a wrong thing they are prompted to input their answer again.
One of the most important iterations is the first "do-while" loop that contains the whole program. It allows the program to run at least one time and then the user is prompted with "do you want to enter another color?" if the user says yes then the program runs again until the user inputs something other than yes for that question.


### File Input and Output

This program is using file input in order to store information about the user. The user is asked if they have trouble with the specific color they provided and if the say yes using an "if" statement the program stores that the user has problem with that color and writes the values for red, green, and blue that were previously provided by the user thus helping us keep track of the colors they have trouble with and those they don't.