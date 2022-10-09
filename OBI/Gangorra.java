import java.util.Scanner;

public class Main {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);

        int P1 = tec.nextInt();
        int C1 = tec.nextInt();
        int P2 = tec.nextInt();
        int C2 = tec.nextInt();
    
        int lado1 = P1*C1;
        int lado2 = P2*C2;
    
        if(lado1 == lado2) {
            System.out.println("0");
        }else if(lado1 > lado2) {
            System.out.println("-1");
        }else {
            System.out.println("1");
        }
    }
}