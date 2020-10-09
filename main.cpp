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
  fstream fileReader;
  string fileName = "colorblindinfo.txt";
  string redColor;
  string greenColor;



  cout << "This program will help you figure out if you are colorblind." << endl;

  cout << "What is your name? ";
  cin >> name;

  cout << "Ok, " << name << ", we will use red, and green colored text, the colors of a stoplight to determine if you are colorblind. (minus the yellow, I need to figure that out :) )" << endl;

  cout << red << "What does the color of this text look like to you?: 12345abcdefgh" << def << endl;
  cin >> redColor;

  cout << green << "What does the color of this text look like to you: 12345abdefgh" << def << endl;
  cin >> greenColor;

  if(redColor != "red" || greenColor != "green")
    {
      cout << "You are colorblind." << endl;
    }else
    {
      cout << "You are not colorblind." << endl;
    }

  cout << "Would you like to learn more about colorblindness? Type 'y' for a wikipedia article link on colorblindness or 'n' if you are not interested." << endl;
  cin >> y;

  while(y == 'y'){
    fileReader.open(fileName, ios::in);
    getline(fileReader, fileName);
    cout << fileName << endl;
    break;
    fileReader.close();
  }

  return 0;
}
