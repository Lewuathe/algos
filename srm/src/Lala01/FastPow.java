package Lala01;

import java.util.Scanner;

public class FastPow {
    public static long mod_pow(long x, long n, long mod) {
        long res = 1;
        while (n > 0) {
            if ((n & 1) == 1) res = res * x % mod;
            x = x * x % mod;
            n = n >> 1;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long mod = 100000000;
        while(true) {
            long a = sc.nextLong();
            long x = sc.nextLong();
            if (a == 0 && x == 0) break;
            long ret = mod_pow(a % mod, x, mod);
            System.out.println(ret);
        }
    }
}
