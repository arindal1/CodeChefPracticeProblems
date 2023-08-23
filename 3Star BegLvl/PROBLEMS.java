import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int p = scanner.nextInt();
        int s = scanner.nextInt();
        List<Pair> ans = new ArrayList<>();

        for (int i = 1; i <= p; i++) {
            int[] score = new int[s];
            for (int j = 0; j < s; j++) {
                score[j] = scanner.nextInt();
            }
            Pair[] m = new Pair[s];
            for (int j = 0; j < s; j++) {
                int num = scanner.nextInt();
                m[j] = new Pair(score[j], num);
            }

            int count = 0;
            Arrays.sort(m);
            for (int j = 1; j < s; j++) {
                if (m[j - 1].second > m[j].second) {
                    count++;
                }
            }
            ans.add(new Pair(count, i));
        }
        ans.sort(null);

        for (int i = 0; i < p; i++) {
            System.out.println(ans.get(i).second);
        }
    }
}

class Pair implements Comparable<Pair> {
    int first, second;

    public Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public int compareTo(Pair other) {
        return Integer.compare(this.first, other.first);
    }
}
