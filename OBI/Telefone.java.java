import java.util.Scanner;

public class Telefone {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);

        String ent = tec.nextLine();

        String result1 = ent.replace('A','2');
        String result2 = result1.replace('B','2');
        String result3 = result2.replace('C','2');
        String result4 = result3.replace('D','3');
        String result5 = result4.replace('E','3');
        String result6 = result5.replace('F','3');
        String result7 = result6.replace('G','4');
        String result8 = result7.replace('H','4');
        String result9 = result8.replace('I','4');
        String result10 = result9.replace('J','5');
        String result11 = result10.replace('K','5');
        String result12 = result11.replace('L','5');
        String result13 = result12.replace('M','6');
        String result14 = result13.replace('N','6');
        String result15 = result14.replace('O','6');
        String result16 = result15.replace('P','7');
        String result17 = result16.replace('Q','7');
        String result18 = result17.replace('R','7');
        String result19 = result18.replace('S','7');
        String result20 = result19.replace('T','8');
        String result21 = result20.replace('U','8');
        String result22 = result21.replace('V','8');
        String result23 = result22.replace('W','9');
        String result24 = result23.replace('X','9');
        String result25 = result24.replace('Y','9');
        String result26 = result25.replace('Z','9');

        System.out.println(result26);
    }
}