import java.io.*;
import java.util.*;
public class Main{
    public static void main(String args[]) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder out = new StringBuilder();
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            int n = Integer.parseInt(br.readLine());
            int curr =1, cnt =0;
            while(cnt<n){
                out.append(curr).append(" ");
                cnt++;
                if(cnt == n) break;
                out.append(curr+1).append(" ");
                cnt++;
                curr +=3;
            }
            out.append('\n');
        }
        System.out.print(out);
    }
}
