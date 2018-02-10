import java.util.Scanner;

public class ECHO {
 
  public static void main(String[] args) {
      final Scanner sc = new Scanner(System.in);
      while(sc.hasNextInt()) {
          System.out.println(sc.nextInt());
      }
  }
}
