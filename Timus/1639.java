import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList  <Integer> mas = new ArrayList<>();
        int m,n = 0;
        m = input.nextInt();
        n = input.nextInt();
        if (m*n%2 == 1){
            System.out.println("[second]=:]");
        }
        else{
            System.out.println("[:=[first]");
        }
    }
}
