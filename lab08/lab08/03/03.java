public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {5, 3, 7},
            {2, 0, 9},
            {4, 6, 0}
        };

        search:
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == 0) {
                    System.out.println(i);
                    System.out.println(j);
                    break search;
                }
            }
        }
    }
}