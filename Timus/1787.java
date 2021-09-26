import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k,n,a,sum = 0;
        k=input.nextInt();
        n=input.nextInt();
        for(int i = 0; i < n ;i++){
            a=input.nextInt();
            sum = a-k+sum;
            if (sum<0){
                sum = 0;
            }
        }
        if (sum<0){
            System.out.println(0);
        }
        else{
            System.out.println(sum);
        }
    }
}
