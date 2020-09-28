#include<iostream>
using namespace std;

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

  cout << "Enter Value of n... ";
  cin >> num;

  if (isPrime(num)) {
    cout << num << " is a Prime Number.";
  } else {
    cout << num << " is not a Prime Number.";
  }
  return 0;
}