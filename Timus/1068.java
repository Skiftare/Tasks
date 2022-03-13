import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n,ans=0;
		n=input.nextInt();


			for(int i = Math.min(1,n);i<=Math.max(1, n);i++) {
				ans = ans+i;
			}
		System.out.print(ans);


		input.close();
	}

}
