#include <iostream>
#include <fstream>
#include <vector>
#include "trafficlightanswers.h"

using namespace std;
void colorBlindWebsite();
void userTestInput();
void colorBlindTypeWebsite();
void colorBlindWebsite();

int main(){
  trafficlightanswers userAnswers;
  trafficlightanswers colorBlindTypeInfo;
  trafficlightanswers colorBlindWebsite;
  string name;
  char y;
  fstream fileReader;
  string fileName = "colorblindness.txt";

/* Lines 20-28 get the user's name, informs the user of the test and lets the user know how the test will work. */
  cout << "This program will help you figure out if you are colorblind." << endl;

  cout << "What is your name? ";
  cin >> name;

  cout << "Ok, " << name << ", we will use four different pictures of stoplights to determine if you are colorblind." << endl;

  cout << name << ", click on the file called 'Test 1' and type 'y' if the traffic light colors look normal to you or 'n' if the colors do not look normal. Repeat this process for tests 2-4." << endl;

/* Calls the function userTestInput within the class trafficlightanswers in order to ask the user if the colors they see on the traffic light are how they normally view traffic lights. */
  userAnswers.userTestInput();

/* Calls the function colorBlindTypeWebsite within the class trafficlightanswers and asks the user if they would like the link to an article on their colorblind type. */
  userAnswers.colorBlindTypeWebsite();

/* Calls the function colorBlindWebsite which asks the user if they would like a link to the colorblindness wikipedia article. */
  userAnswers.colorBlindWebsite();

  return 0;
}