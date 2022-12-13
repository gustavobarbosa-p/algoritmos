import java.util.Scanner;

public class Vestibular {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int pontuacao = 0;
        int n = tec.nextInt();
        String gabarito = tec.next();
        String respostas = tec.next();
        
        char[] vet = new char[n];
        for(int i = 1; i <= n; i++) {
            vet[i-1] = gabarito.charAt(i-1);
        }
        char[] vet2 = new char[n];
        for(int i = 1; i <= n; i++) {
            vet2[i-1] = respostas.charAt(i-1);
        }
        for(int i = 1; i <= n; i++) {
            if(vet[i-1] == vet2[i-1]) {
                pontuacao += 1;
            }
        }
        System.out.println(pontuacao);
        tec.close();
    }
}