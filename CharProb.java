class CharProb
{
	String replaceAllDigitsRegExp(String input) {
    int len = input.length();
    char []arr= new char[len];
    int i;
    for(i=0;i<len;i++){
        char c= input.charAt(i);
        //if(c>'0'|| c=='0' && c<'9' || c=='9'){
		if(c>47 && c<58){
            arr[i]='#';
        }
        else{
            arr[i]=c;
        }
    }
    return String.valueOf(arr);
	//arr.toString();
	}
	
	public static void main(String p[])
	{
		CharProb cc= new CharProb();
		System.out.println(cc.replaceAllDigitsRegExp("I am under 25 age group"));
	}
}