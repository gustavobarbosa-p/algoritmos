import java.util.*;

public class AlarmeDespertador {
    public static void main(String[] args) {
        try (Scanner tec = new Scanner(System.in)) {
            int i = 0;
            while(i < 4) {

                int H1 = tec.nextInt();
                int M1 = tec.nextInt();
                int H2 = tec.nextInt();
                int M2 = tec.nextInt();
                int T1 = (H1 * 60) + M1;
                int T2 = (H2 * 60) + M2;
                int b = T2-T1;
                
                if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
                    return;
                }if(T1 < T2) {
                    System.out.println(b);
                }else {
                    System.out.println(1440+(T2-T1));
                    i++;
                }
            }
            
            tec.close();
        }
    }
}