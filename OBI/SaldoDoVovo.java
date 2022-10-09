import java.util.Scanner;

public class SaldoDoVovo {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int N = tec.nextInt();
        int S = tec.nextInt();
        int menor = S;
        
        for(int i = 0; i < N; i++) {
            int entrada = tec.nextInt();
            S += entrada;
            
            if(S < menor) {
                menor = S;
            }
        }
        System.out.println(menor);
    }
}