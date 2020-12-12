# The Colorblind Test

## Description
This program will use four photos of traffic lights to dermine if you are colorblind and what type of colorblind you are.

# v0.1 Updates
Font in traffic light colors are shown to the user and they are asked if they see each color as red/green/yellow.
# v0.2 Updates
Implemented the use of an array that keeps track of the user's answers for each test. 
# v1.0 Updates
This program now features the use of classes and will now provide links to webpages about certain types of colorblindness, depending on what you have.

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

I have used three different data types for my variables. String, char, and fstream. I used the string variable to ask the name of the user and the filename of each of the colorblind articles. I used the char variable to store the user's answers to the traffic light tests and the answers to whether or not they would like more information on colorblindness. Finally, I used the fstream varible to call the ceach of the colorblind article files.

### Input and Output

Input has been used effectively by asking the user for their name, how they see colors for each traffic light picture, and if the user would like to learn more about their specific type of colorblindness. The output has been used effectively by outputting information about how the program works and which test they are answering and if they would like to learn more about their type of colorblindness.

### Decisions

I have used several if statements to determine what type of colorblindness the user may or may not have and if they want to view a link to an article on their type of colorblindness in a .txt file.

### Iteration

I used a while loop to open the each of the .txt files that contain links to certain types of colorblindness. If the user wants to learn more, they simply type 'y' and the while loop will open the file for them. I also implemented a for loop that will print 'Test 1/2/3/4' before the program recieves the user's test answers. 

### File Input and Output

For file input, I declared the variable fileName as the colorblindness link file, fileNameD for the deuternomalia link file, fileNameP for the Protanopia link file and fileNameT for the tritanopia link file. For file output, I asked the user of they would like to learn more about their type of colorblindness and if they responded with 'y' for yes, the file would be called and output the text in the file, a wiki link on colorblindness or an article on their specific type of colorblindness.