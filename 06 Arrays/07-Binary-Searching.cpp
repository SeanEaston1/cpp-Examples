#include <iostream>
using namespace std;

int main() {
  // Declare and initialize a sorted array
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5; // size of the array

  // The element we want to search for
  int x = 3;

  // Perform binary search
  int start = 0;
  int end = n - 1;
  bool found = false;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == x) {
      found = true;
      break;
    } else if (arr[mid] < x) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  // Print the result
  if (found) {
    cout << "Element found!" << endl;
  } else {
    cout << "Element not found." << endl;
  }

  return 0;
}
