#include <iostream>                                   //header file
using namespace std;                                  //for identifiers
#define MAX 100                                       //defining that MAX is 100
int main()                                            //main function
{
	int arr[MAX];                                        //taking input array
	int n,i,j;                                           //taking input integers
	int temp;
	
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	
	if(n<0 || n>MAX)                                     //putting first condition
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	
	for(i=0;i<n;i++)                                     //starting a loop
	{
		cout<<"Enter element ["<<i+1<<"] ";                 //unsorted elements
		cin>>arr[i];
	}
	
	cout<<"Unsorted Array elements:"<<endl;                  //given form of array elements 
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])                                     // process to sort
			{
				temp  =arr[i];                                      //swapping
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;     //sorted in ascending order
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
  return 0;
}
