import java.util.Scanner;

public class CheckPoint18_4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        
        System.out.println(powerOfTwo(n));
    }
    
    public static long powerOfTwo(long n) {
        if (n == 0) {
            return 1;
        }
        else {
            return 2 * powerOfTwo(n - 1);
        }     
    }
}
