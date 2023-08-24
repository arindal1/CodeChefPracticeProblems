import java.util.Scanner;

public class Main {
    public static void whoisWinner() {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();

        long dif = Math.abs(x - y);
        if (dif >= 2) {
            if (x > y)
                System.out.println("CHEF");
            else
                System.out.println("CHEFINA");
        } else {
            if (x == y) {
                if (x % 2 == 1)
                    System.out.println("CHEF");
                else
                    System.out.println("CHEFINA");
            } else {
                long mn = Math.min(x, y);
                if (mn % 2 == 1)
                    System.out.println("CHEF");
                else
                    System.out.println("CHEFINA");
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            whoisWinner();
        }
    }
}
