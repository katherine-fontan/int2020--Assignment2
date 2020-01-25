/*
Katherine Fontan
2290561
Assignment 2 - zero both

Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.
*/


#include <iostream>
using namespace std;


void ZeroBoth (int &num1, int &num2);

int main (int argc, char **argv){

  int number1, number2;
  cout << "Choose a number: "<<endl;
  cin >> number1;
  cout<< "Choose another: "<< endl;
  cin>> number2;

  ZeroBoth (number1, number2);
  cout<< "The values were set to zero." << endl;


  return 0;
}

void ZeroBoth (int& x, int& y){
  x = 0;
  y = 0;
  
  return;
}
