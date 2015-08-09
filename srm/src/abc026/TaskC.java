package abc026;

import java.util.Scanner;

public class TaskC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] B = new int[N];
        for (int i = 0; i < N - 1; i++) {
            B[i + 1] = sc.nextInt() - 1;
        }

        int[] dp = new int[N];
        for (int i = N-1; i >= 0; i--) {
            int max = Integer.MIN_VALUE;
            int min = Integer.MAX_VALUE;
            int count = 0;
            for (int j = 1; j < N; j++) {
                // If member i is the boss of member j.
                if (B[j] == i) {
                    max = Math.max(max, dp[j]);
                    min = Math.min(min, dp[j]);
                    count++;
                }
            }
            if (count == 0) {
                dp[i] = 1;
            } else if (count == 1) {
                dp[i] = 2 * max + 1;
            } else {
                dp[i] = max + min + 1;
            }
//            for (int k = 0; k < N; k++) {
//                System.out.printf("%d ", dp[k]);
//            }
//            System.out.println("");
        }
        System.out.println(dp[0]);
    }
}
