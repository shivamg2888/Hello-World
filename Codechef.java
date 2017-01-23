
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int i,j;
		int [] ar= new int[100];
		int []ar1= new int[1000];
		System.out.println("enter size");
		int n= sc.nextInt();
		System.out.println("enter values");
		for(i=0;i<n;i++)
		ar[i]= sc.nextInt();
		
		for(i=0;i<n;i++){
		    int x=ar[i];
		    for(j=i+1;j<n;j++){
		        if(x==ar[j]){ ar1[x]++; }	ar1[x]=ar[x]+1;
		        
		    }
		}
		for(i=0;i<1000;i++){
		    if(ar1[i]>0){   System.out.println("duplicate element: "+i);  }
		}
		
	}
}
