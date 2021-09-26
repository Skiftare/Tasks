import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        if ((a%2 == 0) | (b%2 == 1)){
            System.out.print("yes");
        }
        else{
            System.out.print("no");
        }
        input.close();
    }
}
