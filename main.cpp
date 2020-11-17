#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector <char> userAnswer(vector <char>);
void colorBlindWebsite();

int main()
{
  string name;
  char y;
  fstream fileReader;
  string fileName = "colorblindinfo.txt";
  vector <char> answers;


  cout << "This program will help you figure out if you are colorblind." << endl;

  cout << "What is your name? ";
  cin >> name;

  cout << "Ok, " << name << ", we will use four different pictures of stoplights to determine if you are colorblind." << endl;

  cout << name << ", click on the file called 'Test 1' and type 'y' if the traffic light colors look normal to you or 'n' if the colors do not look normal. Repeat this process for tests 2-4." << endl;
  userAnswer(answers);

  colorBlindWebsite();

  return 0;
}

//function definitions
vector <char> userAnswer(vector <char> answers){
  char input;

  for(int i = 1; i <= 4; i++){
    cout << "Test: " << i << " ";
    cin >> input;
    answers.push_back(input);
  }
  if(answers[0] == 'y' && answers[1] == 'n' && answers[2]== 'n' && answers[3] == 'n'){
    cout << "You are not colorblind." << endl;
  }
  if(answers[0] == 'n' && answers[1] == 'y' && answers[2]== 'n' && answers[3] == 'n'){
    cout << "You are colorblind. The type of colorblindness you have is called deuternomalia." << endl;
  }
  if(answers[0] == 'n' && answers[1] == 'n' && answers[2]== 'y' && answers[3] == 'n'){
    cout << "You are colorblind. The type of colorblindness you have is called protanopia." << endl;
  }
  if(answers[0] == 'n' && answers[1] == 'n' && answers[2]== 'n' && answers[3] == 'y'){
    cout << "You are colorblind. The type of colorblindess you have is called tritanopia." << endl;
  }
}

void colorBlindWebsite(){
  fstream fileReader;
  string fileName = "colorblindinfo.txt";
  char y;

cout << "Would you like more information on colorblindess? Type y for yes and copy the link in your browser or type no for no." << endl;
cin >> y;

  while(y == 'y'){
    fileReader.open(fileName, ios::in);
    getline(fileReader, fileName);
    cout << fileName << endl;
    break;
    fileReader.close();
  }
}