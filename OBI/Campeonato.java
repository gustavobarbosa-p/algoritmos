import jva.util.Scanner;

public class Campeonato {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);
        int Cv, Ce, Cs, Fv, Fe, Fs, ptsC, ptsF;
        
        Cv = tec.nextInt();
        Ce = tec.nextInt();
        Cs = tec.nextInt();
        Fv = tec.nextInt();
        Fe = tec.nextInt();
        Fs = tec.nextInt();
        ptsC = Cv * 3 + Ce;
        ptsF = Fv * 3 + Fe;
        
        if(ptsC > ptsF) {
            System.out.println("C");
        }if(ptsC < ptsF) {
            System.out.println("F");
        }if(ptsC == ptsF) {
            System.out.println("=");
        }
    }
}