import java.util.Scanner;

public class AndandoNoTempo {
    public static void main(String[]args) {
		Scanner tec = new Scanner(System.in);
        
		int A = tec.nextInt();
		int B = tec.nextInt();
		int C = tec.nextInt();
        
		if(A == B || B == C || A == C){
			System.out.println("S");
		}else if (A + B == C || A + C == B || B + C == A){
			System.out.println("S");
		}else{
			System.out.println("N");
		}
		tec.close();
	}
}