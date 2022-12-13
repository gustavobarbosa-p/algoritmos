import java.util.Scanner;

public class Copa {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int K = tec.nextInt();
        int L = tec.nextInt();
        
        if (K <= 8 && L > 8) {
            System.out.println("final");
	    } else if ((K <= 4 && L > 4) || (K <= 12 && L > 12)) {
	        System.out.println("semifinal");
	    } else if ((K % 2 == 1) && (L == K + 1)) {
	        System.out.println("oitavas");
	    } else {
	        System.out.println("quartas");
	    }
        tec.close();
    }
}