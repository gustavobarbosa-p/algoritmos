import java.util.Scanner;

public class FugaComHelicoptero {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int H = tec.nextInt();
        int P = tec.nextInt();
        int F = tec.nextInt();
        int D = tec.nextInt();
        
        for(int pAtual = F; ;pAtual += D) {
            if(pAtual == -1) {
                pAtual = 15;
            }
            if(pAtual == 16) {
                pAtual = 0;
            }
            if(pAtual == H) {
               System.out.println("S");
                break;
            }
            if(pAtual == P) {
               System.out.println("N");
                break;
            }
        }
    }
}