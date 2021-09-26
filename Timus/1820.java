import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k,n;
        n=input.nextInt();
        k=input.nextInt();
        if (n<=k){
            System.out.println(2);
        }
        else {
            if (n * 2 % k == 0) {
                System.out.println(n * 2 / k);
            } else {
                System.out.println(n * 2 / k + 1);
            }
        }
    }
}
