import java.util.Scanner;

public class CobraCoral {
    public static void main (String[] args) {
        Scanner rog = new Scanner(System.in);
        
        int i1, i2, i3, i4;
        i1 = rog.nextInt(); 
        i2 = rog.nextInt();
        i3 = rog.nextInt();
        i4 = rog.nextInt();
          
        if(i1!=i4 && i2 >= 0 && i3 >= 0) {
            System.out.println("V");
        }else {
            System.out.println("F");
        }
        rog.close();
    }
}