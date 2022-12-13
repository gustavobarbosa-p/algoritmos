import java.util.Scanner;

public class CampoMinado {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int nCel = tec.nextInt();
        int[] cel = new int[nCel];

        for(int i = 0; i < cel.length; i++) {
            cel[i] = tec.nextInt();
        }
        for(int i = 0; i < cel.length; i++) {
            int qDeMi = 0;
            if (i == 0) {
                if(cel[i] == 1) {
                    qDeMi++;
                }
                if(cel[i+1] == 1) {
                    qDeMi++;
                }
            }

            if(i > 0 && i < cel.length -1) {
                if(cel[i-1] == 1) {
                    qDeMi++;
                }
                    if(cel[i] == 1) {
                        qDeMi++;
                    }
                    if(cel[i+1] == 1) {
                        qDeMi++;
                }
            }
            if (i == cel.length - 1) {
                if(cel[i-1] == 1) {
                    qDeMi++;
                }
                if ( cel[i] == 1) {
                    qDeMi++;
                }
            }
            System.out.println(qDeMi);
        }
        tec.close();
    }
}