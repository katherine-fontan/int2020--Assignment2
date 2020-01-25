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
  int numberArray[10];
  int inputNumber;

//for loop to populate the array
  for (int i = 0; i < 10; ++i)
  {
    cout << "Enter a nonnegative number: "<< endl;
    cin >> inputNumber;

    if (inputNumber < 0)
      numberArray[i] = abs(inputNumber);
    else
      numberArray[i] = inputNumber;

  }
  cout << endl;
  cout << "Numbers in array are: "<<endl;

  //for loop to print numbers in Array
  for (int i = 0; i < 10; ++i){

    cout << numberArray[i] <<endl;
  }


  return 0;
}
