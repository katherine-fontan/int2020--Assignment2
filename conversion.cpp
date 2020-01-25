/*
Katherine Fontan
2290561
luzfonta@chapman.edu
Assignment 2- conversion

Write a program that will read in a length in feet and inches and
output the equivalent length in meters and centimeters.
*/
#include <iostream>
using namespace std;

double userInput ();
double convert (double length);
double output (double output);

int main (int argv, char **argc){
  double feetLenght, inchesLenght;

  bool continueProgram = true;
  string userAnswer;

  while(continueProgram == true){
    cout<< "Do you want to continue converting lenghts? (Yes or exit)" << endl;
    cin >> userAnswer;

    if(userAnswer == "exit" || userAnswer == "Exit"){ //how to put a string to lower case?
      cout<< "Goodbye" << endl;
      continueProgram = false;
      break;
    }
    else{
      continueProgram = true;
      userInput();
    }


  }


  return 0;
}

//implementing function
double userInput(){
  cout << "Enter the length (in feet) " << endl;
  cin >> feetLenght;
  cout << "Enter the length (in inches) " << endl;
  cin >> inchesLenght;

}
double convert (double feetLength, double inchesLenght){
  

}
