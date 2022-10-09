import java.util.Scanner;

public class IdadeDeDonaMonica {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);
        
        int M = tec.nextInt();
        int A = tec.nextInt();
        int B = tec.nextInt();
        int terceiro = M-(A+B);
        
        int maisVelho = A;
        
        if(B > maisVelho) {
            maisVelho = B;
        }if(terceiro > maisVelho) {
            maisVelho = terceiro;
        }
        System.out.println(maisVelho);
    }
}