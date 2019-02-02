import java.util.*;
 public class CapturaEntrada{
	 
	 public static int capturarEntero(String msg){
		 Scanner sc = new Scanner(System.in);
		 System.out.print(""+msg+": ");
		 return (sc.nextInt());
	 }
 }