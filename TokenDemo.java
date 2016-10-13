import java.util.*;
class TokenDemo
{
	// utilise the method of stringBuffer
	public static void main(String p[])
	{
		StringTokenizer str = new StringTokenizer("Aradhya Brillance Center for java and testing","a");
		while(str.hasMoreTokens()==true)
		{
			System.out.println(str.nextToken());
		}
	}
}