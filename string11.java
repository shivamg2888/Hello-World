// problem on string
import java.util.StringTokenizer;
class String11
{
	public static void main(String p[]){
	int i,j=0;
	String s1="Hello world, Welcome to the programming";
	//StringBuffer br=new StringBuffer(s);
	//printf("%c",s);
	System.out.println(s1);
	StringTokenizer st= new StringTokenizer(s1,"o");
	while(st.hasMoreTokens()==true){
		System.out.print(st.nextToken()+"xx");
		}
}
}