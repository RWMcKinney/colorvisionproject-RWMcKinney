# The Colorblind Test

## Description

This program will use both the colors red and green to determine if you are colorblind or not.

## Developer

Ryan McKinney

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!Replace with an example of the program running with user interaction!!!
```

## C++ Guide

### Variables and Data Types

I have used three data types to declare my variables. I have used string to determine the name and colors the user sees. I used fstream to establish a file and output it if the user chooses. I finally used char to ask if the user would like to learn more about colorblindness.

### Input and Output

Output has been used effectively my informing the user what the program does and helps explain how the test will work. The input works effectively by taking the user's name, how they see colors, and if they want to learn more about colorblindness.

### Decisions

I have used an if statement that determines if the user does not see the color red as red and the color green as green. Following that, I have included an else statement that lets the user know if they are not colorblind.

### Iteration

I used a while loop to open the colorblind information file. I the user wants to learn more, they simply type 'y' and the while loop will open the file for them.

### File Input and Output

For file input, I declared the variable fileName as the file that we would like to open at the end of the program. For file output, I asked the user of they would like to learn more about colorblindness and if they responded with 'y' for yes, the file would be called and output the text in the file, a wiki link on colorblindness.