import java.util.Scanner;

public class ECHO {
 
  public static void main(String[] args) {
      // Lire un vecteur d'entiers depuis l'entrée standard.
      // La classe scanner permet de lire facilement des types primitifs et des chaînes de caractères.
      final Scanner sc = new Scanner(System.in);
      // Tant qu'il reste un entier à lire
      while(sc.hasNextInt()) {
          // on écrit directement l'entier sur la sortie standard (sans le stocker)
          System.out.println(sc.nextInt());
      }
  }
}
