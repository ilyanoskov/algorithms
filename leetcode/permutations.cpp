#include <iostream>

using namespace std;

int globalArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void swap(int x, int y) {
  int temp = globalArray[x];
  globalArray[x] = globalArray[y];
  globalArray[y] = temp;
  return;
}

void printArray(int size) {
  int i;

  for (i = 0; i < size; i++) std::cout << globalArray[i] << " ";

  std::cout << std::endl;

  return;
}

void permute(int k, int size) {
  int i = 0;
  if (k == 0)
    printArray(size);
  else {
    for (i = k - 1; i >= 0; i--) {
      swap(i, k - 1);
      permute(k - 1, size);
      swap(i, k - 1);
    }
  }

  return;
}

int main() {
  permute(2, 2);
  return 0;
}
