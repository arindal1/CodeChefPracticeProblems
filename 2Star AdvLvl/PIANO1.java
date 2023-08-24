import java.util.Scanner;

public class Main {
    public static void pianoTiles() {
        Scanner scanner = new Scanner(System.in);
        long N = scanner.nextLong();
        String s = scanner.next();
        long sad, rez = 0, i = 0, idx = 0;
        while (i < s.length()) {
            if (s.charAt(i) == 'S') {
                idx++;
            } else {
                idx += 2;
            }
            i++;
        }
        sad = idx;
        while (sad <= 12 * N) {
            rez += 12 * N - sad;
            sad += idx;
        }
        System.out.println(rez);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong();
        while (t-- > 0) {
            pianoTiles();
        }
    }
}
