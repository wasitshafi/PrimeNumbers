import java.util.Scanner;

public class PrimeNumbers {
  public static void setPrimes(int[] arr, int n) { // Time Complexity O(N Log(Log N))
    arr[0] = 1;
    arr[1] = 1;
  
    for (int i = 2; i * i <= n; i++) {
      if (arr[i] == 0) {
        for (int j = i * i; j <= n; j += i) {
          arr[j] = 1;
        }
      }
    }
  }

  public static void printPrimes(int[] arr, int n) {
    for (int i = 0; i <= n ; i++) {
      if (arr[i] == 0) {
        System.out.print(i + " ");
      }
    }
  }
  
  public static void main(String[] args) {
    int n;
    int[] arr;
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter Value of n... ");
    n = scanner.nextInt();
    if (n < 0) { //By default assertions are disabled, so i am using simple if statement to validate 
      System.exit(-1);
    }
    arr = new int[n + 1];
    setPrimes(arr, n);
    System.out.print("Prime numbers upto " + n + " are as : ");
    printPrimes(arr, n);
    scanner.close();
  }
}