#include<iostream>
#include<cassert>
using namespace std;

void setPrimes(int* arr, int n) { // Time Complexity O(N Log(Log N))
  arr[0] = 1;
  arr[1] = 1;

  for (int i = 2; i * i <= n; i++) {
    if (arr[i] == 0) {
      for (int j = i * i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }
}

void printPrimes(int* arr, int n) {
  for (int i = 0; i <= n ; i++) {
    if (arr[i] == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  int n;
  int* arr;

  cout << "Enter Value of n... ";
  cin >> n;
  assert(n >= 0);
  arr = (int *)calloc(n + 1, sizeof(int));
  setPrimes(arr, n);
  cout << "Prime numbers upto " << n << " are as : ";
  printPrimes(arr, n);
  free(arr);
  arr = NULL;
  return 0;
}