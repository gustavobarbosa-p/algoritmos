import java.util.Scanner;

public class NotaCortada {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        
        int b = tec.nextInt();
        int t = tec.nextInt();
        int a = (b+t)*35;
        
        if(a>35*160) {
            System.out.println("1");
        }else if(a<35*160) {
           System.out.println("2");
        }else {
            System.out.println("0");
        }
        tec.close();
    }
}