import java.util.Scanner;

public class RevisaoDeContrato {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
		
        while(true) {
        
        String num = tec.next();
        String ent = tec.next();
        String saida = ent.replace(num , "");
        
           if(ent.charAt(0) == '0') {
            	break;
               
           }else if(saida.trim().equals("") || saida == null) {
                System.out.println("0");
               
        	}else {
               if(ent.length() > 9) {
            		System.out.println(saida);
               }else {
               		System.out.println(Integer.parseInt(saida));
            	}
            }
    	}
        tec.close();
    }
}