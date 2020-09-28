#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void setPrimes(int* arr, int n) { // Time Complexity O(N Log(Log N))
  int i;
  int j;
  arr[0] = 1;
  arr[1] = 1;

  for (i = 2; i * i <= n; i++) {
    if (arr[i] == 0) {
      for (j = i * i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }
}

void printPrimes(int* arr, int n) {
  int i;
  for (i = 0; i <= n ; i++) {
    if (arr[i] == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  int n;
  int* arr;

  printf("Enter Value of n... ");
  scanf("%d", &n);
  assert(n >= 0);
  arr = (int *)calloc(n + 1, sizeof(int));
  setPrimes(arr, n);
  printf("Prime numbers upto %d are as : ", n);
  printPrimes(arr, n);
  free(arr);
  arr= NULL;
  return 0;
}