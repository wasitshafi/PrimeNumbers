import java.util.Scanner;

public class PrimeNumbers {
  public static boolean isPrime(int num) { // Time Complexity O(sqrt(N))
    if (num < 2) {
      return false;
    } else {
      for (int i = 2; i * i <= num; i++) { // or for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0) {
          return false;
        }
      }
      return true;
    }
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