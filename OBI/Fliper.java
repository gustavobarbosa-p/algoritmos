import java.util.Scanner;

public class Fliper {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int P = tec.nextInt();
        int R = tec.nextInt();
        
        if(P == 1 && R == 0) {
        	System.out.println("B");
        }if(P == 0 && R == 0) {
        	System.out.println("C");
        }if(P == 0 && R == 1) {
        	System.out.println("C");
        }if(P == 1 && R == 1) {
        	System.out.println("A");
        }
        tec.close();
    }
}