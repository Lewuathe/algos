/**
 * Created by sasakikai on 8/10/15.
 */
public class Sort {
    public static void merge(int[] left, int[] right, int[] ret) {
        int l = 0;
        int r = 0;
        int i = 0;
        while (l < left.length && r < right.length) {
            if (left[l] < right[r]) {
                ret[i++] = left[l++];
            } else {
                ret[i++] = right[r++];
            }
        }

        while (l < left.length) ret[i++] = left[l++];
        while (r < right.length) ret[i++] = right[r++];
    }

    public static void msort(int[] list) {
        if (list.length < 2) {
            return;
        }

        int[] ret = new int[list.length];
        int m = list.length / 2;
        int n = list.length - m;
        int[] l = new int[m];
        int[] r = new int[n];

        for (int i = 0; i < m; i++) l[i] = list[i];
        for (int j = 0; j < n; j++) r[j] = list[j + m];
        msort(l);
        msort(r);
        merge(l, r, list);
    }

    public static void qsort(int[] list, int left, int right) {
        if (right - left <= 1) {
            return;
        }

        int half = (right + left) / 2;
        int pivot = list[half];
        int r = right - 1;
        int l = left;
        while (l < r) {
            while (list[r] > pivot) r--;
            while (list[l] < pivot) l++;
            swap(list, r, l);
            r--;
            l++;
        }
        qsort(list, left, half);
        qsort(list, half, right);
    }

    public static void swap(int[] list, int i, int j) {
        int tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
    }

    public static void main(String[] args) {
        int[] l = {9,8,7,6,5,4,3,2,1,0};
        //qsort(l, 0, l.length);
        msort(l);
        for (int i = 0; i < l.length; i++) {
            System.out.printf("%d ", l[i]);
        }
    }
}
