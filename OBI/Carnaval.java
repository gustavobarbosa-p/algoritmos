import java.util.Scanner;

public class Carnaval {
    public static void main(String[]args) {
        Scanner tec = new Scanner(System.in);
        
        double n1 = tec.nextDouble();
        double n2 = tec.nextDouble();
        double n3 = tec.nextDouble();
        double n4 = tec.nextDouble();
        double n5 = tec.nextDouble();
        double maiorNumero = 0;
        double menorNumero = 11;

        if(n1>maiorNumero) {
            maiorNumero = n1;
        }
        if(n1<menorNumero) {
            menorNumero = n1;
        }
        if(n2>maiorNumero) {
            maiorNumero = n2;
        }
        if(n2<menorNumero) {
            menorNumero = n2;
        }
        if(n3>maiorNumero) {
            maiorNumero = n3;
        }
        if(n3<menorNumero) {
            menorNumero = n3;
        }
        if(n4>maiorNumero) {
            maiorNumero = n4;
        }
        if(n4<menorNumero) {
            menorNumero = n4;
        }
        if(n5>maiorNumero) {
            maiorNumero = n5;
        }
        if(n5<menorNumero) {
            menorNumero = n5;
        }
        double nota = n1+n2+n3+n4+n5-(maiorNumero+menorNumero);
        System.out.printf("%.1f", nota);
        tec.close();
    }
}