import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class T1880 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<Integer> an=new ArrayList<Integer>();
        List<Integer> bn=new ArrayList<Integer>();
        List<Integer> cn=new ArrayList<Integer>();
        int a=sc.nextInt();
        int count=0;
        int a1=a;
        while(a1-->0)
        {
            int n=sc.nextInt();
            an.add(n);
        }

        int b=sc.nextInt();
        int b1=b;
        while(b1-->0)
        {
            int n=sc.nextInt();
            bn.add(n);
        }

        int c=sc.nextInt();
        int c1=c;
        while(c1-->0)
        {
            int n=sc.nextInt();
            cn.add(n);
        }

        if(a>=b && a>=c)
        {
            for (Integer integer : an) {
                if(bn.contains(integer)&&cn.contains(integer))
                    count++;
            }
        }

        else if(b>=a && b>=c)
        {
            for (Integer integer : bn) {
                if(an.contains(integer)&&cn.contains(integer))
                    count++;
            }
        }
        else if(c>=b && c>=a)
        {
            for (Integer integer : cn) {
                if(bn.contains(integer)&&bn.contains(integer))
                    count++;
            }
        }

        System.out.println(count);

    }

}
