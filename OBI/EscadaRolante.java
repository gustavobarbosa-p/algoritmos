import java.util.Scanner;

public class EscadaRolante {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int n = tec.nextInt();
        int[] instante = new int[n];
        int tempoLigada = 0;
        int pDeParada = 10;
        
        for(int i = 0; i < n; i++) {
            instante[i] = tec.nextInt();
        }
        
        for(int i = 0; i < n-1; i++) {
            if(instante[i] + 10 <= instante[i+1]) {
                pDeParada += 10;
            }else {
                pDeParada += instante[i+1] - instante[i];
            }
        }
        System.out.println(pDeParada);
    }
}