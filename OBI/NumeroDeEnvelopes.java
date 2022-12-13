import java.util.Scanner;

public class NumeroDeEnvelopes {
    public static void main(String[] args){
        Scanner tec = new Scanner(System.in);

		int N = tec.nextInt();
    	int[] numero = new int[N];

    	for (int i = 0; i < numero.length; i++) {
    	    numero[i] = tec.nextInt();
    	}
    	int menor = numero[0];
    	for (int i = 1; i < N; i++) {
    	    if(numero[i] < menor) {
    	        menor = numero[i];
			}
		}
		System.out.println(menor);
		tec.close();
	}
}