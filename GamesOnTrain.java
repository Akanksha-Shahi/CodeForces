// 2236A
import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        if(!sc.hasNextInt()) return;
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] h = new int[n];
            int maxH=0;
            for( int i =0; i<n; i++){
                h[i]= sc.nextInt();
                if(h[i]>maxH) maxH = h[i];
            }
            int minK = Integer.MAX_VALUE;
            for( int targetH = maxH+1; targetH<=maxH+6; targetH++){
                int currK =0;
                boolean possible = true;
                for( int i =0; i<n; i++){
                    int x = targetH-h[i];
                    if(x<1){
                        possible = false;
                        break;
                    }
                    currK = Math.max(currK, x);
                }
                if(possible){
                    minK = Math.min(minK, currK);
                }
            }
            System.out.println(minK);
        }
        sc.close();
    }
}
