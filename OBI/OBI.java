import java.util.Scanner;

public class OBI {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int N = tec.nextInt();
        int P = tec.nextInt();
        int participantes = 0;
        
        for(int i = 0; i < N; i++) {
            int X = tec.nextInt();
            int Y = tec.nextInt();
            if(X + Y >= P) {
                participantes+=1;
            }
        }
      System.out.println(participantes);
      tec.close();
    }
}