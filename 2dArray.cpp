/*
Katherine Fontan
2290561
luzfonta@chapman.edu
Assignment 2- 2D Array

Write code that will fill the array a (declared below) with numbers typed in
at the keyboard. The numbers will be input five per line, on four lines
(although your solution need not depend on how the input numbers are divided into lines).
*/

#include <iostream>
using namespace std;

int main (int argc, char **argv){
  const int ROWS = 4;
  const int COLS = 5;
  int a[ROWS][COLS]; //five per line, 4 lines

//for loop to populate array
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++){
      cout << "Enter Element (" << i << "," << j << "): "<<endl;
      cin >> a[i][j]; //picks up 1 element
    }
  }



// for loop print 2d array
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << a[i][j] << "  ";
   }

   // Newline for new row
   cout << endl;
  }

  return 0;
}
