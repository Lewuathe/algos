package abc026;

import java.util.Scanner;

public class TaskD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();

        double l = 0.0;
        double r = 10000.0;

        while (true) {

            double t = (r + l) / 2.0;
            double ft = A * t + B * Math.sin(C * Math.PI * t);
            if (Math.abs(ft - 100.0) < 10e-11) {
                System.out.println(t);
                break;
            } else {
                if (ft - 100.0 > 0) {
                    r = t;
                } else {
                    l = t;
                }
            }
        }
    }
}
