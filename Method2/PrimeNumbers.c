#include<stdio.h>

int isPrime(int num) { // Time Complexity O(N)
  if (num < 2) {
    return 0;
  } else {
    int i;
    int half = num / 2;
  
    for (i = 2; i <= half; i++) {
      if (num % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}

int main() {
  int num;

  printf("Enter Value of n... ");
  scanf("%d", &num);

  if (isPrime(num)) {
    printf("%d is a Prime Number.", num);
  } else {
    printf("%d is not a Prime Number.", num);
  }
  return 0;
}