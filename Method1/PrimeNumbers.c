#include<stdio.h>

int isPrime(int num) { // Time Complexity O(N)
  int i = 2;

  if (num > 1) {
    while (num % i != 0) {
      i++;
    }
  }
  return i == num;
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