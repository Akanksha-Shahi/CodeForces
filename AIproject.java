import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            long n = sc.nextInt();
            long x = sc.nextInt();
            long y = sc.nextInt();
            long z = sc.nextInt();
            long time1= (n+(x+y)-1)/(x+y);
            long time2;
            long linesDoneByz= z*x;
            if(linesDoneByz >= n) time2 =(n+x-1)/x;
            else{
                long remainingLines = n-linesDoneByz;
                long speedWithAI = x+(10*y);
                long additionTime =(remainingLines+speedWithAI-1)/speedWithAI;
                time2 = z+additionTime;
            }
            System.out.println(Math.min(time1, time2));
        }
        sc.close();
    }
}
