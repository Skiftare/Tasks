import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //ArrayList  <Integer> mas = new ArrayList<>();
        int n, a, b, c, max, index,bin = 0;
        max = 0;
        index = 0;
        n = input.nextInt();
        int[] mas = new int[n];
        for (int i = 0; i < n; i++) {
            bin = input.nextInt();
            mas[i] = bin;
        }
        for (int i = 0; i < n-2; i++) {
            a = mas[i]+mas[i+1]+mas[i+2];
            if (a>max){
                max = a;
                index = i+2;
            }
        }
        System.out.print(max);
        System.out.print(" ");
        System.out.print(index);
    }
}
