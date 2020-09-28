import java.util.Scanner;

public class PrimeNumbers {
  public static boolean isPrime(int num, int i) { // Time Complexity O(sqrt(N))
    if (num < 2) {
      return false;
    } else if (num == 2) {
      return true;
    } else if (num % i == 0) {
      return false;
    } else if (i * i > num) {
      return true;
    } else {
      return isPrime(num, i + 1);
    }
  }
  
  public static void main(String[] args) {
    int num;
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter Value of n... ");
    num = scanner.nextInt();
  
    if (isPrime(num, 2)) {
      System.out.print(num + " is a Prime Number.");
    } else {
      System.out.print(num + " is not a Prime Number.");
    }
    scanner.close();
  }
}