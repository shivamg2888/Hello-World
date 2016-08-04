/* problems of array
	1- To find missing number
   2- To reverse the array elements     && reverse in-place
   3- Sorting on Array   merge sort, quick sort
   4- To find duplicates elements    &&  remove duplicates
   5- intersection of two sorted array
   6- Kth largest element
   7- find common elements in three sorted array
   8- Find the minimum value in Rotated Sorted Array
   9- Given the size of array n and number k.Find all elements that
   	occur more than n/k times
   10-Find a sub array with large product in an Array in both positive
   	and -ve nos.

*/

#include<stdio.h>
#include<conio.h>
 // find missing number
 int i,j,k=0,m=0,a2[5],a[10]={1,2,3,5,2,7,7,9};
 void main()
 {
 // find and replace duplicate elements
    printf("\n Program is searching for duplicate elements");
    for(i=0;i<10;i++)
    {
      for(j=i;j<10;j++)
      {
      	if(a[i]==a[j] && i!=j)
         {
         	a2[k++]=a[i];

         }
      }
    }
    printf("Dupplicate elements are: \n");
    for(m=0;m<k-1;m++)
    {
    	printf("%d ",a2[m]);
    }
 getch();
 }

