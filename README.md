# The Colorblind Test

## Description

# v0.2 Updates
This program will use four photos of traffic lights to determine if you are colorblind and what type of colorblind you are.

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

I have used three different data types for my variables. String, char, and fstream. I used the string variable to ask the name of the user and the filename of the colorblind article. I used the char variable to store the user's answers to the traffic light tests. Finally, I used the fstream varible to call the colorblind article file.

### Input and Output

Input has been used effectively by asking the user for their name, how they see colors for each traffic light picture, and if the user would like to learn more about colorblindness. The output has been used effectively by outputting information about how the program works and which test they are answering and if they would like to learn more about colorblindness.

### Decisions

I have used several if statements to determine what type of colorblindness the user may or may not have and if they want to view the colorblind information file.

### Iteration

I used a while loop to open the colorblind information file. I the user wants to learn more, they simply type 'y' and the while loop will open the file for them. I also implemented a for loop that will print 'Test 1/2/3/4' before the program recieves the test answers. 

### File Input and Output

For file input, I declared the variable fileName as the file that we would like to open at the end of the program. For file output, I asked the user of they would like to learn more about colorblindness and if they responded with 'y' for yes, the file would be called and output the text in the file, a wiki link on colorblindness.