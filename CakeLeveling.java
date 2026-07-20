import java.io.*;
import java.util.*;
public class CakeLeveling{
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            int n = Integer.parseInt(br.readLine());
            String[] line = br.readLine().split(" ");
            long[] a = new long[n];
            for( int i =0; i<n; i++) a[i]= Long.parseLong(line[i]);
            long currentSum =0;
            long minH = Long.MAX_VALUE;
            for( int i =0; i<n; i++){
                currentSum +=a[i];
                long currentAvg = currentSum/(i+1);
                minH = Math.min(minH, currentAvg);
                out.print(minH+(i==n-1? "":" "));
            }
            out.println();
        }
        out.flush();
    }
}
