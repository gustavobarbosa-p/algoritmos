import java.util.Scanner;

public class MaiorNumero {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);
        
        int y = 1;
        int x = tec.nextInt();
        int maior = x;
        
        while (y!=0) {
            y = tec.nextInt();
            if(y > maior) {
                maior = y;
            }
        }
      System.out.print(maior);
    }
}