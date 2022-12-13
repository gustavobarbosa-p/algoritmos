import java.util.Scanner;

public class IdadeDeCamila {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int a = tec.nextInt();
        int b = tec.nextInt(); 
        int c = tec.nextInt();

        if(a == b && a == c && b == c) {
            System.out.println(a);
            System.exit(0);
        }
        if(a == b && a != c && b != c) {
            System.out.println(a);
        }if(a != b && a == c && b != c) {
            System.out.println(c);
        }if(a != b && a != c && b == c) {
            System.out.println(b);
        }if(a > b && a < c || a < b && a > c) {
            System.out.println(a);
        }if(b > a && b < c || b < a && b > c) {
            System.out.println(b);
        }if(c > a && c < b || c < a && c > b) {
            System.out.println(c);
        }
        tec.close();
    }
}