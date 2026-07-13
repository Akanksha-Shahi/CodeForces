// 617A- Elephant
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long result = (long)Math.ceil(x/5.0);
        System.out.println(result);
        sc.close();
    }
}
