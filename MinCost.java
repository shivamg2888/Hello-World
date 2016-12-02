class MinCost
{
	public static void main(String[] args)
	{
		int[] arr= {1,1,1,4,3,2,1,7,8,3};
		int min=0, min1=0,k=0,l=0,cost=0;
		int len= arr.length;
		for(int i=0; i<len; i++)
		{
			min= arr[0];
			for(int j=1; j<len; j++)
			{
				if(min> arr[j])
				{
					min= arr[j];
					k=j;
				}
			}
			if(len>=1)
			{
			min1=arr[0];
			for(int j=0;j<len; j++){
				 if(min1>arr[j] && j!=k){
					min1=arr[j];
					l=j;
					}
				}	
			min=min+min1;
			System.out.println(min);
			}
			cost= cost+min;
			if(k>l)
			{
				arr[l]=min;
				while(k<len-1){
					arr[k]= arr[k+1];
					k++;
				}
			}
			else
			{
				arr[k]=min;
				while(l<len-1){
				arr[l]= arr[l+1];
				l++;
				}
			}
			len--;
		}
		System.out.println(cost);
	}
}	