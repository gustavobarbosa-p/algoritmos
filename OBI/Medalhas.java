import java.util.Scanner;

public class Medalhas {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);

        int t1 = tec.nextInt();
        int t2 = tec.nextInt();
        int t3 = tec.nextInt();
        int ouro = 0;
        int prata = 0;
        int bronze = 0;
        
        if(t1<t2 && t1<t3 && t2<t3 && (t1!=t2 && t1!=t3)&&(t1 >= 1 && t1<= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
        	ouro = 1;
            prata = 2;
            bronze = 3;
        }if(t2<t1 && t2<t3 && t1<t3 && (t1!=t2 && t1!=t3) && (t1 >= 1 && t1<= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
        	ouro = 2;
            prata = 1;
            bronze = 3;
        }if(t2<t1 && t2<t3 && t3<t1 && (t1!=t2 && t1!=t3)&&(t1 >= 1 && t1<= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
        	ouro = 3;
            prata = 1;
            bronze = 2;
        }if(t3<t2 && t3<t1 && t2<t1 && (t1!=t2 && t1!=t3)&&(t1 >= 1 && t1<= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
            ouro = 3;
            prata = 2;
            bronze = 1;
        }if(t1<t2 && t1<t3 && t3<t2 && (t1!=t2 && t1 !=t3)&&(t1 >= 1 && t1<= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
            ouro = 1;
            prata = 3;
            bronze = 2;
        }if(t3<t2 && t3<t1 && t1<t2 && (t1!=t2 && t1!=t3)&&(t1 >= 1 && t1 <= 1000)&&(t2 >= 1 && t2<= 1000)&&(t3 >= 1 && t3<= 1000)){
            ouro = 2;
            prata = 3;
            bronze = 1;
        }
        System.out.println(ouro);
        System.out.println(prata);
        System.out.println(bronze);
    }
}