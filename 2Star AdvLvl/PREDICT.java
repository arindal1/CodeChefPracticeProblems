import java.util.Scanner;

public class Main {
    public static void amountOfMoney() {
        Scanner scanner = new Scanner(System.in);
        double pa = scanner.nextDouble();
        double pb = 1 - pa;
        double ans = 10000;

        ans += 2 * pa * pb * 10000;

        if (pa > pb) {
            ans -= pb * 10000;
        } else {
            ans -= pa * 10000;
        }

        System.out.printf("%.2f%n", ans);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong();
        while (t-- > 0) {
            amountOfMoney();
        }
    }
}
