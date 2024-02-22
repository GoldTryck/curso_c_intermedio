public class TiposDeDatos{
	public static void main(String[] args){
		/*
		byte $a = (byte)-129;
		byte _b = (byte)128;
		System.out.println("El byte va desde: " + +$a+" hasta: " + _b);
		*/
		short c = 32767; // 2^15
		short d = -32767;

		System.out.println("El short va desde: " + c + " Hasta: " + d + "\n");
		int e, f; // 2^31

		e = -214783648;
		f = 214783647;
		System.out.println("El int va desde: " + e + " Hasta: " + f + "\n");

		long g,h; // 2^63;

		g = 9223372036854775808l; // termina con l minúscula o L;
		h = 9223372036854775807L;

		System.out.println("El int va desde: " + g + " Hasta: " + h + "\n");		
	}
}