import java.util.Scanner;

public class Main {
    public static void luckyNumber() {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int[] arr = new int[n];
        int alice = 0, bob = 0, albob = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
            if (arr[i] % a == 0 && arr[i] % b == 0) {
                albob++;
            } else if (arr[i] % a == 0) {
                bob++;
            } else if (arr[i] % b == 0) {
                alice++;
            }
        }
        if (alice == 0 && bob == 0 && albob != 0)
            System.out.println("BOB");

        else if (alice == 0 && bob == 0 && albob == 0)
            System.out.println("ALICE");

        else if (albob == 0) {
            if (alice >= bob)
                System.out.println("ALICE");
            else
                System.out.println("BOB");
        } else {
            if (alice > bob)
                System.out.println("ALICE");
            else
                System.out.println("BOB");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            luckyNumber();
        }
    }
}
