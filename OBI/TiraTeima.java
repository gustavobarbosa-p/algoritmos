import java.util.Scanner;

public class TiraTeima {
    public static void main(String[] args) {
        Scanner teclado = new Scanner (System.in);
        
        int X = teclado.nextInt();
        int Y = teclado.nextInt();
        
        if((X >= 0 && X <= 432) && (Y >= 0 && Y <= 468)) {
            System.out.println("dentro");
        } else {
            System.out.println("fora");
        }
        teclado.close();
    }
}