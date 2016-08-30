//Variable length argument list -introduced
// in jdk 1.5, methods receive unspecified no.of arguments.

class Arglist
{
	public static double average(double... numbers)
	{
		double total = 0.0;
		for(double e: numbers)
		{
			total+=e;
		}
		 return total/numbers.length;
	}
	public static void main(String jop[])
	{
		double d1=43,d2=42,d3=44,d4=46;
		System.out.printf("d1=%.1f\nd2=%.1f",d1,d2);
		//System.out.println("\nAverage of d1,d2,d3 is: ",average(d1,d2,d3));		// method PrintStream.println() is not applicable
		System.out.printf("\nAverage of d1,d2,d3 is: %.1f",average(d1,d2,d3));	
		
	}
}