import java.util.Scanner;

public class Main {
    public static void tennisTourny() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n % 2 == 0) {
            System.out.println("NO");
        } else {
            char[][] ans = new char[n][n];

            for (int i = 0; i < n; i++) {
                for (int j = 1; j <= n / 2; j++) {
                    ans[i][(i + j) % n] = '1';
                }
            }

            System.out.println("YES");
            for (char[] line : ans) {
                for (char ch : line) {
                    System.out.print(ch);
                }
                System.out.println();
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            tennisTourny();
        }
    }
}
