import java.util.Scanner;

public class GuerrePorTerritorio {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int n = tec.nextInt();
        int[] vet = new int[n+1];
        int total = 0;
	
		for(int i = 1; i <= n; i++) {
			vet[i] = tec.nextInt();
			total+=vet[i];
		}
		int soma = 0;
		for(int i = 1; i <= n; i++) {
			soma+=vet[i];
			if(2*soma == total) {
				System.out.println(i);
			}
		}
	}
}