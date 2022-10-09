import java.util.Scanner;

public class ZeroParaCancelar {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        	
        int n = tec.nextInt();
		int x = 0;
		int num = 0;
		int soma = 0;

		int[] vet = new int[100000];
		
		for (int i = 0; i < n; i++) {
		    x = tec.nextInt();	

		    if(x == 0) {
		        num--;
			}else {
		        vet[num] = x;
				num+=1;
			}
		}

		for (int i = 0; i < num; i++) {
		    soma += vet[i];
		}
        
		System.out.println(soma);
	}
}