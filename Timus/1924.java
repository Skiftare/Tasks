import java.lang.String;
import java.util.*;



public class qq {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int k = input.nextInt();
        int ans = 0;
        for(int i = 0;i<=k;i++){
            ans = ans+i;
        }
        if (ans %2 == 0){
            System.out.print("black");

        }
        else{
            System.out.print("grimy");
        }
        input.close();


    }
}
