#include <iostream>
#include <fstream>
#include "colormod.h"

using namespace std;
Color::Modifier red(Color::FG_RED);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier def(Color::FG_DEFAULT);


int main()
{
  string name;
  char y;
  char n;
  fstream fileReader;
  string fileName;
  string redColor;
  string greenColor;


  cout << "This program will help you figure out if you are colorblind and if so, what kind of colorblind you are." << endl;

  cout << "What is your name? ";
  cin >> name;

  cout << "Ok, " << name << ", we will use red, yellow, and green colored text, the colors of a stoplight to determine if you are colorblind." << endl;

  cout << red << "What does the color of this text look like to you?: 12345abcdefgh" << def << endl;
  cin >> redColor;

  cout << green << "What does the color of this text look like to you: 12345abdefgh" << def << endl;
  cin >> greenColor;

  if(redColor == "green" || redColor == "brown" || greenColor == "brown" || greenColor == "blue")
    {
      cout << "You are colorblind." << endl;
    }

  return 0;
}
