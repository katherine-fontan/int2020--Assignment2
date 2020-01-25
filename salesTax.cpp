/*
Katherine Fontan
2290561
luzfonta@chapman.edu
Assignment 2- Sales Tax

Implement a function called addTax. The function addTax has two formal parameters:
taxRate, which is the amount of sales tax expressed as a percent; and cost,
which is the cost of an item before tax. The function returns the value (float)
of cost so that it includes sales tax.
*/
#include <iostream>
using namespace std;


float addTax (float taxRate, float cost);

int main (int argv, char **argc){
  float taxRate, cost;
  const int PERCENT = 100;

  cout << "How much does the item cost? " << endl;
  cin >> cost;
  cout << "What is the sales tax (in %)? " << endl;
  cin>> taxRate;

  //convert ta Rate in decimals
  taxRate = taxRate/PERCENT;
  cout<< "The total cost including sales tax is $" <<addTax(taxRate, cost)<< endl;
  return 0;
}
float addTax (float taxRate, float cost){

  cost = cost + (cost * taxRate);
  return cost;
}
