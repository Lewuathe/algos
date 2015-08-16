/**
 * Created by sasakikai on 8/16/15.
 */
public class Swap {
    public static void swap(int a, int b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        System.out.printf("a=%d\n", a);
        System.out.printf("b=%d\n", b);
    }

    public static void main(String[] args) {
        int a = 2;
        int b = 3;
        swap(a, b);
    }
}
