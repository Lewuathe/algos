/**
 * Created by sasakikai on 8/11/15.
 */
public class Bit {
    public static int getBit(int num, int i) {
        return num & (1 << i);
    }

    public static int setBit(int num, int i) {
        return num | (1 << i);
    }

    public static int clearBit(int num, int i) {
        int mask = ~(1 << i);
        return num & mask;
    }

    public static void main(String[] args) {
        System.out.println(getBit(3, 2));
        int n = setBit(3, 2);
        n = clearBit(n, 2);
        System.out.println(n);
    }
}
