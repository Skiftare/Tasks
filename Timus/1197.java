import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int k,n,x,y,flag=0;
		char x1,y1;
		String s = "  ";
		n=input.nextInt();
		for(int q = 0;q<n;q++) {
			s=input.next();
			x1=s.charAt(0);
			y1=s.charAt(1);
			x = (int) x1-96;
			y = (int) y1-48;
			for(int i =-2;i<=2;i++) {
				for(int j=-2;j<=2;j++) {
					
					if (j != i) {
						if(x-i>0 & y-j>0 & x-i < 9 & y-j < 9) {
							if(i*i+j*j==5) {
								flag++;
							}
						}
					}
				}
			}
			
			System.out.println(flag);
			flag = 0;
		}
		input.close();
	}

}
