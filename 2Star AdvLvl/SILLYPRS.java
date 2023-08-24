import java.util.Scanner;

public class Main {
    public static void chefPairs() {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long sum = 0;
        long even_a = 0, even_b = 0, odd_a = 0, odd_b = 0;
        long total_mismatched, ans;

        long[] a = new long[(int) n];
        long[] b = new long[(int) n];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextLong();
            sum += a[i];
            if (a[i] % 2 == 0) {
                even_a++;
            } else {
                odd_a++;
            }
        }

        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextLong();
            sum += b[i];
            if (b[i] % 2 == 0) {
                even_b++;
            } else {
                odd_b++;
            }
        }

        total_mismatched = n - (Math.min(even_a, even_b) + Math.min(odd_a, odd_b));
        ans = sum - total_mismatched;
        System.out.println(ans / 2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            chefPairs();
        }
    }
}
