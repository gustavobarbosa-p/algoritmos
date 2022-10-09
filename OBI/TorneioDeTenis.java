import java.util.Scanner;

public class TorneioDeTenis {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        char[] resultado = new char[7];
        int pts = 0;
        
        int i = 0;
        while(i < 6) {
        	i++;
        	resultado[i] = tec.next().charAt(0);
        	if(resultado[i] == 'V') {
            	pts += 1;
            }
        }
        if(pts == 5 || pts == 6) {
        	System.out.println("1");
        }if(pts == 3 || pts == 4) {
        	System.out.println("2");
        }if(pts == 1 || pts == 2) {
        	System.out.println("3");
        }if(pts == 0) {
        	System.out.println("-1");
        }
    }
}