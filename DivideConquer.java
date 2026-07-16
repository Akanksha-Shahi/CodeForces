// 2241A
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        if(scanner.hasNextInt()){
            int t = scanner.nextInt();
            for( int i =0; i<t; i++){
                int x = scanner.nextInt();
                int y = scanner.nextInt();
                if(x%y==0) System.out.println("YES");
                else System.out.println("NO");
            }
        } 
        scanner.close();
    }
}
