#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //create an array large enough to store 10 ints
  int araaay[10];

  //populate it with random values
  int i; //iterator
  srand( time(NULL) );
  for (i = 0; i<10; i++){
    araaay[i] = rand();
  }

  //set the last value to 0
  araaay[9] = 0;

  //print out the values in araaay
  for(i = 0; i < 10; i++){
    printf("araaay[%d]: %d\n", i, araaay[i]);
  }

  //create a separate array to store 10 ints
  int secondaraaay[10];

  //using only pointers, populate the second array with values of the first in reverse order
  int * disisapointer; //initialize the pointer
  for (i = 0; i < 10; i++){
    disisapointer = &araaay[i]; //set the pointer to the place where the original value was stored
    secondaraaay[9-i] = *disisapointer; //populate the second array with the value at the memory location
  }

  //print out the values in secondaraaay
  printf("------FLIPPITY FLIP FLIP------\n");
  for(i = 0; i < 10; i++){
    printf("secondaraaay[%d]: %d\n", i, secondaraaay[i]);
  }
}
