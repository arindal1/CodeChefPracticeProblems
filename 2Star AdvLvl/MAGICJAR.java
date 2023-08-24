import java.util.Scanner;

public class Main {
    public static void minimumJars() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long temp, ans = 0;

        for (int i = 0; i < n; i++) {
            temp = scanner.nextLong();
            ans += temp - 1;
        }
        System.out.println(ans + 1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            minimumJars();
        }
    }
}
