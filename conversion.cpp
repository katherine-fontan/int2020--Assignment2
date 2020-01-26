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

//declare functions
double userInput (double& feet, double& inches);
double convert(double feet, double inches, double& meters, double& centimeters);
void output (double& meters, double& centimeter);

int main (int argv, char **argc){
  //declare variable used
  double feet, inches, meters, centimeters;

  //other variables needed to run the while loop
  bool continueProgram = true;
  string userAnswer;

//implement while loop to continue converting to meters and centimeters until user wants to exit
  while(continueProgram == true){
    cout<< "Do you want to continue converting lengths? (Yes or exit)" << endl;
    cin >> userAnswer; //take user input to continue or exit program

    //check user answer
    if(userAnswer == "exit" || userAnswer == "Exit"){
      cout<< "Goodbye" << endl;
      continueProgram = false; //if they want to exit, bool is set to false and break the loop
      break;
    }
    else{
      continueProgram = true;// the bool continues to be true, because user answered yes.
      userInput(feet, inches);//call user input to get lenght
      convert(feet, inches, meters, centimeters); //call convert funcions
      output(meters, centimeters);//call output function
    }
  }

  return 0;
}

//implementing function
double userInput(double& feet, double& inches){
  cout << "Enter the length (in feet) " << endl;
  cin >> feet;
  cout << "Enter the length (in inches) " << endl;
  cin >> inches;
  return feet, inches;

}
double convert (double feet, double inches, double& meters, double& centimeters){

  int temp;

  meters = 0.3048 * feet;
  meters = meters + (inches * 0.0254);
  temp = meters;
  centimeters = meters - temp;
  meters = meters - centimeters;
  centimeters = centimeters * 100;

  return meters, centimeters;
}
 void output(double& meters, double& centimeters){

  cout<< "Conversion: " << meters << " meters and "<< centimeters << " centimeters." << endl;
}
