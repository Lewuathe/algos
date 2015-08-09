package abc026;

import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by sasakikai on 7/28/15.
 */
public class TaskB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] R = new int[N];
        for (int i = 0; i < N; i++){
            R[i] = sc.nextInt();
        }
        Arrays.sort(R);
        double area = 0.0;
        int sign = 1;
        for (int i = N-1; i >= 0; i--) {
            area += sign * R[i] * R[i];
            sign *= -1;
        }
        System.out.println(Math.PI * area);
    }
}
