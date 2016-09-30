import java.util.*;
class AlphabeticalOrder
{
	public static void main(String []p)
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("\nEnter the string\t");
		String str= sc.nextLine();
		char []ch= str.toCharArray();
		Arrays.sort(ch);
		String abc= new String(ch);
		System.out.println("Sorted string is :\t"+abc);
	}
}