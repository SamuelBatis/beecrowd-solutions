
import java.util.Scanner;

public class solutions {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    double x = scanner.nextDouble();
    double y = scanner.nextDouble();

    if (x == 0.0 && y == 0.0) {
      System.out.println("Origem");
    } else if (x == 0.0) {
      System.out.println("Eixo Y");
    } else if (y == 0.0) {
      System.out.println("Eixo X");
    } else {
      if (x > 0.0) {
        if (y > 0.0) {
          System.out.println("Q1");
        } else {
          System.out.println("Q4");
        }
      } else {
        if (y > 0.0) {
          System.out.println("Q2");
        } else {
          System.out.println("Q3");
        }
      }
    }

    scanner.close();
  }
}

/*
 * import java.text.DecimalFormat;
 * import java.text.NumberFormat;
 * import java.util.Locale;
 * import java.util.Scanner;
 * 
 * public class solutions {
 * 
 * public static void main(String[] args) {
 * Locale.setDefault(Locale.US);
 * Scanner scanner = new Scanner(System.in);
 * NumberFormat formatter = new DecimalFormat("#0.00");
 * double[] p = { 4.00, 4.50, 5.00, 2.00, 1.50 };
 * String[] c = scanner.nextLine().split(" ");
 * int a = Integer.parseInt(c[0]);
 * int b = Integer.parseInt(c[1]);
 * 
 * double resp = p[a - 1] * b;
 * 
 * System.out.println("Total: R$ " + formatter.format(resp));
 * 
 * }
 * }
 */