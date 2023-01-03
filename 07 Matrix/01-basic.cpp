#include <iostream>
using namespace std;

int main() {
  // Declare a 2D array with 3 rows and 4 columns
  int matrix[3][4];

  // Initialize the matrix using nested for loops
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      matrix[i][j] = i + j;
    }
  }

  // Print the matrix
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
