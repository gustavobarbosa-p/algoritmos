import java.util.Scanner;

public class Campeonato {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);
        
        int Cv = tec.nextInt();
        int Ce = tec.nextInt();
        int Cs = tec.nextInt();
        int Fv = tec.nextInt();
        int Fe = tec.nextInt();
        int Fs = tec.nextInt();
        int ptsC = Cv * 3 + Ce;
        int ptsF = Fv * 3 + Fe;

        if(Cs > 0 && Fs > 0) {
            System.out.println("");
        }
        
        if(ptsC > ptsF) {
            System.out.println("C");
        }if(ptsC < ptsF) {
            System.out.println("F");
        }if(ptsC == ptsF) {
            System.out.println("=");
        }
        tec.close();
    }
}