import java.util.Scanner;

public class Main {
    static int[][] dp;

    static int solve(int i, int w, int[] weight, int[] value) {
        if (w == 0 || i < 0) {
            return 0;
        }
        if (dp[i][w] != -1) {
            return dp[i][w];
        }
        int ans = solve(i - 1, w, weight, value);
        if (weight[i] <= w) {
            ans = Math.max(ans, solve(i - 1, w - weight[i], weight, value) + value[i]);
        }
        return dp[i][w] = ans;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int w = scanner.nextInt();
            int[] weight = new int[n];
            int[] value = new int[n];
            for (int i = 0; i < n; ++i) {
                int c = scanner.nextInt();
                int p = scanner.nextInt();
                int tVal = scanner.nextInt();
                weight[i] = tVal;
                value[i] = c * p;
            }
            dp = new int[n + 5][w + 5];
            for (int i = 0; i < n + 5; ++i) {
                for (int j = 0; j < w + 5; ++j) {
                    dp[i][j] = -1;
                }
            }
            System.out.println(solve(n - 1, w, weight, value));
        }
    }
}
