#include<iostream.h>
#include<conio.h>
void BSort(int A[],int N)
{
	int t;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(A[j]<A[i])
			{
				t=A[i];
				A[i]=A[j];
				A[j]=t;
			}
		}
	}
	cout<<"Sorted array: ";
	for(int k=0;k<N;k++)
	{
		cout<<A[k]<<'\t';
	}
}
void main()
{
	clrscr();
	int A[10],n;
	cout<<"Enter number of elements(Max=10): ";
	cin>>n;
	cout<<"Enter elements of the array to be sorted: ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	BSort(A,n);
	getch();
}
