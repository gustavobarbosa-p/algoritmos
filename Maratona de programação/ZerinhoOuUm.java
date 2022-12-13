import java.util.Scanner;

public class ZerinhoOuUm {
    public static void main(String[]args) {
        int A, B, C;
        Scanner rog = new Scanner(System.in);
        
        A = rog.nextInt();
        B = rog.nextInt();
        C = rog.nextInt();
        
        if(A!=B&&A!=C) {
            System.out.println("A");
        }if(B!=A&&B!=C) {
            System.out.println("B");
        }if(C!=A&&C!=B) {
            System.out.println("C");
        }if(A==B&&A==C&&B==A&&B==C&&C==A&&C==B) {
            System.out.println("*");
        }
        rog.close();
    }
}