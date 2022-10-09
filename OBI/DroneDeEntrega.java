import java.util.Scanner;

public class DroneDeEntrega {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);

        int a = tec.nextInt();
        int b = tec.nextInt();
        int c = tec.nextInt();
        int h = tec.nextInt();
        int l = tec.nextInt();

        if((a <= h && b <= l) || (b <= h && a <= l ) || (a <= h && c <= l) 
        || (c <= h && a <= l) || (b <= h && c <= l) || (c <= h && b <= l)) {
            System.out.println("S");
        }else{
            System.out.println("N");
        }
    }
}