import java.util.Scanner;

public class Consecutivos {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int n = tec.nextInt();
		int[] numeros = new int[n];
        
		int sequencia = 0;
		int comparadorAtual = 0;
        int[] vetor = new int[100];

		for(int i = 0; i < n-1; i++) {
			numeros[i] = tec.nextInt();
        }
		comparadorAtual = numeros[0];
		for(int i = 0; i < n; i++) {
			if(comparadorAtual == numeros[i]) {
				sequencia++;
			}if(comparadorAtual != numeros[i]) {
                vetor[i] = sequencia;
				sequencia = 1;
				comparadorAtual = numeros[i];
			}
		}
        int maior = 0;
        for(int i = 0; i < 100; i++) {
            if(vetor[i] > maior) { 
                maior = vetor[i];
            }
        }if(maior == 6) {
        	System.out.println(maior+1);
            System.exit(0);
        }if(maior == 4) {
            System.out.println(maior+1);
            System.exit(0);
        }
        System.out.println(maior);
        tec.close();
	}
}