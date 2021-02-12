#include<iostream.h>
#include<conio.h>
void SSort(int A[],int N)
{
	int t,min,pos;
	for(int i=0;i<N-1;i++)
	{       
min=A[i];pos=i;
		for(int j=i+1;j<N;j++)
		{
			if(A[j]<min)
			{
				min=A[j];
				pos=j;
			}
		}
		t=A[i];
		A[i]=A[pos];
		A[pos]=t;
	}
	cout<<"Sorted array: ";
	for(int k=0;k<N;k++)
	{
		cout<<A[k]<<' ';
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
	SSort(A,n);
	getch();
}
