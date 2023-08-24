import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static final long mod = 1000000007;

    public static void main(String[] args) {
        List<Long> l = new ArrayList<>();
        l.add(0L);

        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        for (int i = 0; i < t; ++i) {
            int n = scanner.nextInt();
            for (int j = l.size(); j <= n; ++j) {
                l.add(((l.get(j - 1) * (j + 1)) + j) % mod);
            }

            System.out.println(l.get(n));
        }
    }
}
