public class Matrices{
	
	public static void main(String args[]){
		System.out.println("Matrices enteras\nCaptura para la matriz 1");
		MatrizInt m1 =new MatrizInt(CapturaEntrada.capturarEntero("Numero renglones"), CapturaEntrada.capturarEntero("Numero columnas"));
		System.out.println("\nCaptura para la matriz 2");
		MatrizInt m2 =new MatrizInt(CapturaEntrada.capturarEntero("Numero renglones"), CapturaEntrada.capturarEntero("Numero columnas"));
		
		MatrizInt m3;
		MatrizInt m4;
		
		System.out.println("\nMatrices doubles\nCaptura para la matriz 6");
		MatrizDouble m6 =new MatrizDouble(CapturaEntrada.capturarEntero("Numero renglones"), CapturaEntrada.capturarEntero("Numero columnas"));
		System.out.println("\nCaptura para la matriz 7");
		MatrizDouble m7 =new MatrizDouble(CapturaEntrada.capturarEntero("Numero renglones"), CapturaEntrada.capturarEntero("Numero columnas"));
		
		MatrizDouble m8;
		MatrizDouble m9;
		
		System.out.println("\nImpresion de datos enteros");
		m1.iniciarMatInt();
		System.out.println("Matriz 1: ");
		m1.imprimirMatInt();
		
		m2.iniciarMatInt();
		System.out.println("Matriz 2: ");
		m2.imprimirMatInt();
		
		System.out.println("\nImpresion de resultados enteros");
		m4 = OperacionesMatrices.transponerMatInt(m1);
		System.out.println("Transpuesta Matriz 1: ");
		m4.imprimirMatInt();	
		
		if (Validaciones.validarCuadratura(m1,m2)){
			m3 = new MatrizInt(m1.getRenglones(), m1.getColumnas());
			m3 = OperacionesMatrices.sumarMatInt(m1,m2);
			System.out.println("Matriz 3 = Matriz 1 + Matriz 2");
			m3.imprimirMatInt();

		}
		else System.out.println("No son cuadradas, no se puede realizar la suma");


		if (Validaciones.validarMultiplicabilidad(m1,m2)){
			m3 = new MatrizInt(m1.getRenglones(), m2.getColumnas());
			m3 = OperacionesMatrices.multiplicarMatInt(m1,m2);
			System.out.println("Matriz 4 = Matriz 1 * Matriz 2");
			m3.imprimirMatInt();
		}
		else System.out.println("No son multiplicables");
		
		System.out.println("\nImpresion de datos doubles");
		m6.iniciarMatDouble();
		System.out.println("Matriz 6: ");
		m6.imprimirMatDouble();
		
		m7.iniciarMatDouble();
		System.out.println("Matriz 7: ");
		m7.imprimirMatDouble();
		
		System.out.println("\nImpresion de resultados en matrices doubles");
		m9 = OperacionesMatrices.transponerMatDouble(m6);
		System.out.println("Transpuesta Matriz 6: ");
		m9.imprimirMatDouble();	
		
		if (Validaciones.validarCuadraturaDouble(m6,m7)){
			m8 = new MatrizDouble(m6.getRenglones(), m6.getColumnas());
			m8 = OperacionesMatrices.sumarMatDouble(m6,m7);
			System.out.println("Matriz 8 = Matriz 6 + Matriz 7");
			m8.imprimirMatDouble();

		}
		else System.out.println("No son cuadradas, no se puede realizar la suma");


		if (Validaciones.validarMultiplicabilidadDouble(m6,m7)){
			m8 = new MatrizDouble(m6.getRenglones(), m7.getColumnas());
			m8 = OperacionesMatrices.multiplicarMatDouble(m6,m7);
			System.out.println("Matriz 9 = Matriz 6 * Matriz 7");
			m8.imprimirMatDouble();
		}
		else System.out.println("No son multiplicables");
	}
}