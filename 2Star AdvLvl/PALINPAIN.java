import java.util.Scanner;

public class Main {
    public static void palindromes() {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        if ((a % 2 == 1 && b % 2 == 1) || b == 1 || a == 1) {
            System.out.println(-1);
        } else if (a % 2 == 0 && b % 2 == 0) {
            String s1 = "a".repeat(a / 2);
            String s2 = "b".repeat(b);
            String s3 = "a".repeat(a);
            String s4 = "b".repeat(b / 2);

            System.out.println(s1 + s2 + s1);
            System.out.println(s4 + s3 + s4);
        } else if (a % 2 == 0) {
            String s5 = "a".repeat(a / 2);
            String s6 = "b".repeat(b);
            String s7 = "b".repeat(b / 2);

            System.out.println(s5 + s6 + s5);
            System.out.println(s7 + s5 + 'b' + s5 + s7);
        } else if (b % 2 == 0) {
            String s8 = "b".repeat(b / 2);
            String s9 = "a".repeat(a);
            String s10 = "a".repeat(a / 2);

            System.out.println(s8 + s9 + s8);
            System.out.println(s10 + s8 + 'a' + s8 + s10);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            palindromes();
        }
    }
}
