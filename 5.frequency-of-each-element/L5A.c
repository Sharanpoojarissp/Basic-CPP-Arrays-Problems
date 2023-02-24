#include <stdio.h>
//Count the frequency of each element
 void countFreq(int a[10],int n,int Freq[10])    //Function Definition
 {
     for (int i = 0; i < n; i++)
	{
		int Count = 1;
		for(int j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])    //Check for duplicate elements
    		{
    			Count++;
    			Freq[j] = 0;    /* Make sure not to count frequency of same element again */
    		}
    	}
    	if(Freq[i] != 0)        /* If frequency of current element is not counted */
    	{
    		Freq[i] = Count;
		}
	}
    /* Print frequency of each element*/
 	printf("\n The Frequency of the elements in this Array is : \n");
 	for (int i = 0; i < n; i++)
  	{
  		if(Freq[i] != 0)        
  		{
  			printf("%d Occurs %d Times \n", a[i], Freq[i]);
		}		
  	}
 }
int main()
{
	int  i, j, n;	
	printf("\n Enter the number of elements in an array  :   ");
	scanf("%d", &n);               //Declare size array	
    int a[10], Freq[10];            //Declare two arrays
	printf("\n Enter the elements of an Array  :  ");
	for (i = 0; i < n; i++)       //Initialize both the arrays
	{
    	    scanf("%d", &a[i]);
    	    Freq[i] = -1;         /* Initially initialize frequencies to -1 */
   	}     
    countFreq(a,n,Freq);   //Function call		     
 	return 0;
}
