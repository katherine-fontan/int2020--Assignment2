/*
Katherine Fontan
2290561
luzfonta@chapman.edu
Assignment 2- Int Array

Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write the integers back to the screen (console output).
For this exercise you need not use any functions.

*/
#include <iostream>
using namespace std;

int main (int argc, char **argv){
  int numberArray[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};//initialize the array as -1
  string input;
  int counter = 0;

  cout << "Enter a nonnegative number: "<< endl;
  cout<< "If you want to continue type exit."<<endl;


//while loop to input up to 10 numbers
  while(true){

    //check if the array was populated up to 10
    if (counter > 9)
      break;

    cin >> input; //get user input

    //check user input
    if(input == "exit"){
      cout << "Bye" << endl;
      break;
    }
    else{
      if (stoi(input) < 0){
        cout << "You entered a negative number" << endl;
      }
      else{
        numberArray[counter] = stoi(input);
        counter++;
      }
    }
  }


  cout << endl;
  cout << "Numbers in array are: "<<endl;


  //for loop to print numbers in Array
  for (int i = 0; i < 10 ; ++i){
    if (numberArray[i] < 0){
      break;
    }
    else{
      cout << numberArray[i] << " ";
    }
  }

  cout<< endl;
  return 0;
}
