#include "trafficlightanswers.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using std::fstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void trafficlightanswers::userTestInput(){

  for(int i = 1; i <= 4; i++){
    cout << "Test: " << i << " ";
    cin >> input;
    testAnswers.push_back(input);
  }
  if(testAnswers[0] == 'y' && testAnswers[1] == 'n' && testAnswers[2]== 'n' && testAnswers[3] == 'n'){
    cout << "You are not colorblind." << endl;
  }
  if(testAnswers[0] == 'n' && testAnswers[1] == 'y' && testAnswers[2]== 'n' && testAnswers[3] == 'n'){
    cout << "You are colorblind. The type of colorblindness you have is called deuternomalia." << endl;
  }
  if(testAnswers[0] == 'n' && testAnswers[1] == 'n' && testAnswers[2]== 'y' && testAnswers[3] == 'n'){
    cout << "You are colorblind. The type of colorblindness you have is called protanopia." << endl;
  }
  if(testAnswers[0] == 'n' && testAnswers[1] == 'n' && testAnswers[2]== 'n' && testAnswers[3] == 'y'){
    cout << "You are colorblind. The type of colorblindess you have is called tritanopia." << endl;
  }
}

void trafficlightanswers::colorBlindTypeWebsite(){
  fstream fileReader;
  string fileName = "colorblindinfo.txt";

  if(testAnswers[0] == 'n' && testAnswers[1] == 'y' && testAnswers[2]== 'n' && testAnswers[3] == 'n'){
    cout << "Would you like to learn more about dueternamolia colorblindness? Type 'y' for yes and copy the link in your browser or type 'n' for no." << endl;
    cin >> typeInput;
    while(typeInput == 'y'){
      fileReader.open(fileNameD, std::ios::in);
      getline(fileReader, fileNameD);
      cout << fileNameD << endl;
      break;
      fileReader.close();
    }
  }
  if(testAnswers[0] == 'n' && testAnswers[1] == 'n' && testAnswers[2]== 'y' && testAnswers[3] == 'n'){
    cout << "Would you like to learn more about protanopia colorblindness? Type 'y' for yes and copy the link in your browser or type 'n' for no." << endl;
    cin >> typeInput;
    while(typeInput == 'y'){
      fileReader.open(fileNameP, std::ios::in);
      getline(fileReader, fileNameP);
      cout << fileNameP << endl;
      break;
      fileReader.close();
      }
  }

  if(testAnswers[0] == 'n' && testAnswers[1] == 'n' && testAnswers[2]== 'n' && testAnswers[3] == 'y'){
    cout << "Would you like to learn more about tritanopia colorblindness? Type 'y' for yes and copy the link in your browser or type 'n' for no." << endl;
    cin >> typeInput;
    while(typeInput == 'y'){
      fileReader.open(fileNameT, std::ios::in);
      getline(fileReader, fileNameT);
      cout << fileNameT << endl;
      break;
      fileReader.close();
      }
  }
}

void trafficlightanswers::colorBlindWebsite(){
  fstream fileReader;
  string fileName = "colorblindness.txt";
  char y;

  cout << "Would you like more information on colorblindess? Type 'y' for yes and copy the link in your browser or type 'n' for no." << endl;
  cin >> y;

  while(y == 'y'){
    fileReader.open(fileName, std::ios::in);
    getline(fileReader, fileName);
    cout << fileName << endl;
    break;
    fileReader.close();
  }
}