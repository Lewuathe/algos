class QSort {
    public static int[] qsort(int[] list, int length) {
        if (length == 1) {
            return list;
        }

        int pivot = list[0];
        int[] prev = new int[length];
        int pIndex = 0;
        int[] next = new int[length];
        int nIndex = 0;

        for (int i = 0; i < length; i++) {
            if (list[i] < pivot) {
                prev[pIndex++] = list[i];
            } else {
                next[nIndex++] = list[i];
            }
        }

        prev = qsort(prev, pIndex);
        next = qsort(next, nIndex);

        prev[pIndex] = pivot;
        for (int i = pIndex + 1; i < length; i++) {
            prev[i] = next[i - pIndex - 1];
        }

        return prev;

    }

    public static void main(String[] args) {
        int[] a = {9,8,7,6,5,4,3,2,1,0};
        int[] sorted = qsort(a, 10);
        for (int i = 0; i < 10; i++) {
            System.out.println(sorted[i]);
        }

    }
}