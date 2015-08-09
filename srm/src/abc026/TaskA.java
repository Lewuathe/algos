package abc026;

import java.util.Scanner;

/**
 * Created by sasakikai on 7/22/15.
 */
public class TaskA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();

        int max = Integer.MIN_VALUE;
        for (int x = 0; x < A; x++) {
            int y = A - x;
            max = Math.max(max, x * y);
        }
        System.out.println(max);
    }
}
