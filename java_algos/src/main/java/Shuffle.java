/**
 * Created by sasakikai on 8/15/15.
 */
public class Shuffle {
    public static void shuffleArray(int[] array) {
         for (int i = 0; i < array.length; i++) {
             double len = array.length - i;
             int index = (int)(Math.random() * len) + i;
             int tmp = array[i];
             array[i] = array[index];
             array[index] = tmp;
         }
    }

    public static void main(String[] args) {
        int[] a = {7,2,3,5,6,3,1};
        for (int r = 0; r < 100; r++) {
            shuffleArray(a);
            for (int i = 0; i < a.length; i++) {
                System.out.printf("%d ", a[i]);
            }
            System.out.println("");
        }
    }
}
