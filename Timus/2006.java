import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int ans,a,b,c=0;
		a=input.nextInt();
		b=input.nextInt();
		c=input.nextInt();
		
		ans = Math.min(a - b-c, Math.min(a - b * c, a * b - c));
		
			
		System.out.println(ans);

		input.close();
	}

}
