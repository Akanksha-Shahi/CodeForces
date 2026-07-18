import java.util.Scanner;
public class Main{
    public static void main(String argas[]){
        Scanner sc = new Scanner(System.in);
        if(sc.hasNextInt()){
            int t = sc.nextInt();
            while(t-->0){
                int n = sc.nextInt();
                long ans =0;
                for( int b =1; b<=n; b++){
                    long count = n/b;
                    ans+= (count*count);
                }
                System.out.println(ans);
            }
        }
        sc.close();
    }
}
