#include<iostream>
using namespace std;

int isPrime(int num, int i) { // Time Complexity O(sqrt(N))
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

  cout << "Enter Value of n... ";
  cin >> num;

  if (isPrime(num, 2)) {
    cout << num << " is a Prime Number.";
  } else {
    cout << num << " is not a Prime Number.";
  }
  return 0;
}