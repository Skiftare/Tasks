import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        int a1 = input.nextInt();
        int b1 = input.nextInt();
        int a2 = input.nextInt();
        int b2 = input.nextInt();
        int a3 = input.nextInt();
        int b3 = input.nextInt();
        
        int a = 0;
        int b = 0;
        b = b1-b2;
        a = a1-a3;
        System.out.print(a+" "+b);
        
        input.close();
    }
}
