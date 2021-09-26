

import java.util.*;



public class qq {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int bin = 0;
        int[][] mas = new int[n][n];
        int a,b = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bin = input.nextInt();
                mas[i][j] = bin;
            }
        }
        for(int i =0;i<n-1;i++){
            b = 0;
            a=i;
            while (a>=0) {
                System.out.print(mas[a][b] + " ");
                a--;
                b++;
            }
        }
        for(int i = 0;i<n;i++){
            b = i;
            a=n-1;
            while (b<n) {
                System.out.print(mas[a][b] + " ");
                a--;
                b++;
            }
        }
        input.close();


    }
}
