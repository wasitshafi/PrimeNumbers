import java.util.Scanner;

public class PrimeNumbers {
  public static boolean isPrime(int num) { // Time Complexity O(N)
    int i = 2;

    if (num > 1) {
      while (num % i != 0) {
        i++;
      }
    }
    return i == num;
  }

  public static void main(String[] args) {
    int num;
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter Value of n... ");
    num = scanner.nextInt();
  
    if (isPrime(num)) {
      System.out.print(num + " is a Prime Number.");
    } else {
      System.out.print(num + " is not a Prime Number.");
    }
    scanner.close();
  }
}