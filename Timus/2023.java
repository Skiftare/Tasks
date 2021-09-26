import java.util.*;
public class Main {
	public static int knowlege(int bin,char s) {
		if (s=='A'||s=='P'||s=='R'||s=='O') {
			return 0;
		}
		else if(s=='B'||s=='M'||s=='S') {
			return 1;
		}
		else {
			return 2;
		}
		
	}
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n,flag,bin=0;
		flag = 0;
		String s;
		n=input.nextInt();
		for(int i =0;i<n;i++) {
			s=input.next();
			flag = flag + Math.abs(bin - knowlege(bin,s.charAt(0)));
			bin = knowlege(bin,s.charAt(0));
		}
		System.out.print(flag);
		input.close();
	}

}
