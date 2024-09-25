package ingegneriasw.calcolatoremaven;

import org.apache.logging.log4j.Logger;
import org.apache.logging.log4j.LogManager;

public class Calcolatrice {
	
	private static Logger logger = LogManager.getLogger(Calcolatrice.class);
	
	
	
	private int somma(int a,int b) {
		
		logger.debug("Sto facendo la somma di "+a+" e "+b); 
		
		return a+b;
	}
	
	public static void main(String[] args) {
		
		Calcolatrice c = new Calcolatrice();
		
		//System.out.println("La somma di 5 e 7");

		logger.error("La somma di 5 e 7");
		
		int result=c.somma(5, 7);
		
		//System.out.println("la somma è " + result);
		logger.error("la somma è " + result);
		
		
	}
	
}
