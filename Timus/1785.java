
import java.io.*;
import java.util.*;
public class Task {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if(1<=n && n <= 4){
            System.out.println("few");
         }
        else if(5<=n && n <=9){
            System.out.println("several");  
        } 
        else if(10<=n && n <=19){
            System.out.println("pack");  
        }
        else if(20<=n && n <=49){
            System.out.println("lots");  
        }
        else if(50<=n && n <=99){
            System.out.println("horde");  
        }
        else if(100<=n && n <=249){
            System.out.println("throng");  
        }
        else if(250<=n && n <=499){
            System.out.println("swarm");  
        }
        else if(500<=n && n <=999){
            System.out.println("zounds");  
        }
        else{
          System.out.println("legion");  
        }
      
  }
}
