// java: no builtin function to cop two strings like strcpy
import java.util.*;
class DictionaryOrder
{
	public static void main(String []p)
	{
		
		String s= null;
		int i,j,n,r;
		Scanner sc =new Scanner(System.in);
		System.out.println("\nEnter how many strings you want to enter:\t");
		n= sc.nextInt();
		String [] ar= new String[n+1];
		for(i=0;i<=n;i++)
		{
			ar[i]=sc.nextLine();
		}
		
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n-i-1;j++)
			{
				
				//r=strcmp(ar[j],ar[j+1]);
				r= ar[j].compareTo(ar[j+1]);
				if(r>0)
				{
					//Strcpy(s,ar[j]);
					//strcpy(ar[j],ar[j+1]);
					//strcpy(ar[j+1],s);
					s=ar[j];
					ar[j]=ar[j+1];
					ar[j+1]=s;
				}
			}
		}
		System.out.println("\nDictionary order of string are :\n");
		for(i=0;i<=n;i++){
		System.out.println(ar[i]);
		}
	}
}

/*
String a = "one";
String b = "two";

a = a + b;
b = a.substring(0, (a.length() - b.length()));
a = a.substring(b.length());

System.out.println("a = " + a);
System.out.println("b = " + b);
*/