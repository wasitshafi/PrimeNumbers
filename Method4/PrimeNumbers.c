#include<stdio.h>

int isPrime(int num, int i) {// Time Complexity O(sqrt(N))
  if (num < 2) {
    return 0;
  } else if (num == 2) {
    return 1;
  } else if (num % i == 0) {
    return 0;
  } else if (i * i > num) {
    return 1;
  } else {
    return isPrime(num, i + 1);
  }
}

int main() {
  int num;

  printf("Enter Value of n... ");
  scanf("%d", &num);

  if(isPrime(num, 2)) {
    printf("%d is a Prime Number.", num);
  } else {
    printf("%d is not a Prime Number.", num);
  }
  return 0;
}