#include<iostream>
using namespace std;

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

    cout << "Enter Value of n... ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " is a Prime Number.";
    } else {
        cout << num << " is not a Prime Number.";
    }
    return 0;
}