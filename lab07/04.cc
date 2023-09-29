#include <iostream>

using namespace std;

#define MAXSIZE 10
#define NUMARRAYS 10

int main() {
  // allocating memory
  int *ap[MAXSIZE];
  for (int j = 0; j < NUMARRAYS; j++) {
    *(ap + j) = new int[MAXSIZE];
  }

  // fill with values
  for (int i = 0; i < NUMARRAYS; i++) {
    for (int j = 0; j < MAXSIZE; j++) {
      ap[i][j] = i * i + j;
    }
  }

  // print the arrays
  for (int i = 0; i < NUMARRAYS; i++) {
    for (int j = 0; j < MAXSIZE; j++) {
      cout << ap[i][j] << " ";
    }
    cout << endl;
  }

  // free memory
  for (int k = 0; k < NUMARRAYS; k++) {
    delete[] ap[k];
  }
  return 0;
}