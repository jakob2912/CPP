//This is a simple program where the user enters the height and length of a square and gets the scope printed to the console with 'x's. The empty space is just '-'. This was for me to get into C++, as this was my first C++ Program.

//Include libraries
#include <stdio.h>
#include <stdlib.h>

//Prototypes of functions
void copy(int length);
void printRest(int height, int l);

//The main part of the program
int main() {
  int height, length;

  //Get height and length from the user
  printf("Hoehe: ");
  scanf("%d", &height);
  printf("Breite: ");
  scanf("%d", &length);

  //First row of square
  copy(length);

  //If there is more than one row, print them.
  height--;
  if (!height) 
    return 0;
  else if (height == 1)
    copy(length);
  else {
    printRest(height, length);
    copy(length);
  }

  return 0;
}

//Copy function to print a row of 'x's
void copy(int length) {
  while (length > 0) {
    printf("x");
    length--;
  }
  printf("\n");
}

//printRest function to print 'x' at start and end and '-' between.
void printRest(int height, int l) {
  do{
    int length = l;
    //reduce height, print first 'x'
    height--;
    printf("x");
    length--;

    //while lenght > 1, print -
    while(length > 1) {
      printf("-");
      length--;
    }

    //print 'x'
    printf("x");

    //New Row
    printf("\n");
  } while (height > 1);
}
