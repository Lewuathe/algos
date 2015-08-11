/**
 * Created by sasakikai on 8/11/15.
 */
public class MinSearch {
    public static int minSearch(int[] list, int left, int right) {
        // Given list is like {5, 6, 7, 8, 9, 0, 1, 2, 3, 4}
        if (right - left <= 1) {
            return Math.min(list[right], list[left]);
        }

        int half = (left + right) / 2;
        if (list[left] > list[half]) {
            return minSearch(list, left, half);
        } else {
            return minSearch(list, half, right);
        }
    }

    public static void main(String[] args) {
        int[] l = {5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 1, 2, 3, 4};
        System.out.println(minSearch(l, 0, l.length));
    }
}
