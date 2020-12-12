#ifndef TRAFFICLIGHTANSWERS_H
#define TRAFFICLIGHTANSWERS_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::vector;
using std::fstream;
using std::string;

class trafficlightanswers{
private:
  vector <char> testAnswers;
  char input;
  char typeInput;
  fstream fileReader;
  string fileNameD = "deuternomalia.txt";
  string fileNameP = "protanopia.txt";
  string fileNameT = "tritanopia.txt";

public:
  void userTestInput();
  void colorBlindTypeWebsite();
  void colorBlindWebsite();
};

#endif