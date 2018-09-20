#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //randomseed
  srand(time(NULL));

  int[] arr[10], parr[10];
  int i
  //Populating the first array
  for (i = 0; i < 10; i++) {
    arr[i] = rand();
  }

  //set the last element to 0
  arr[9] = 0;

  printf("The values of the array:\n");
  for(i = 0; i < 10; i++) {
    printf("arr[%d] = %d \n", i, arr[i]);
  }

  //pointer array and its reserved order
  for(i = 0; i < 10; i++) {
    *(parr + 9 - i) = *(arr + i);
  }

  //printing the pointer array
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
  printf("\nValues of the array:\n");
  for(i = 0; i < 10; i++) {
    printf("parr[%d] = %d \n", i, *(parr + i));
  }

  return 0;
}
