import java.util.Scanner;

public class Main {
    public static void garlandBeautiful() {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int n = s.length();
        long cr = 0, cp = 0, cg = 0;
        boolean flag = false;
        if (s.length() % 2 != 0)
            flag = true;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'R')
                cr++;
            else
                cg++;
            if (i > 0) {
                if (s.charAt(i - 1) == s.charAt(i))
                    cp++;
            }
        }
        if (s.length() > 2 && s.charAt(0) == s.charAt(s.length() - 1))
            cp++;
        if (cr != cg || cp > 2)
            flag = true;
        if (flag)
            System.out.println("no");
        else
            System.out.println("yes");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            garlandBeautiful();
        }
    }
}
