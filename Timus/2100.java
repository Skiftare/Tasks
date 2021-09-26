import java.util.*;
public class Main {

    public static void main(String[] args) {
        ArrayList<Integer> mas = new ArrayList<>();

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int ans = 0;
        String s;
        for(int i = 0;i<n;i++){
            s=input.next();
            if (s.length() > 3) {
                if (s.charAt(s.length() - 4) == '+') {
                    ans += 2;
                } else {
                    ans += 1;
                }
            }
            else{
                ans+=1;
            }
            

        }
        ans+=2;
        if (ans == 13){
            ans =14;
        }
        System.out.println(ans*100);
    }
}
