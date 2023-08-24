import java.util.Scanner;

public class Main {
    public static void magicalPath() {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();
        if ((a == 1 && b == 2) || (a == 2 && b == 1))
            System.out.println("Yes");
        else if (a == 1 || b == 1)
            System.out.println("No");
        else if (a % 2 != 0 && b % 2 != 0)
            System.out.println("No");
        else
            System.out.println("Yes");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            magicalPath();
        }
    }
}
