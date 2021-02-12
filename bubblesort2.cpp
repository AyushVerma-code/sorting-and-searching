include<iostream.h>
#include<conio.h>
int AR[5];

void bsort(int AR[])
{
  int temp,ctr;

  for(int i=0;i<5;i++)
  {
    for(int j=0;j<(5-i);j++)
    {
      if(AR[j]>AR[j+1])
      {
	temp=AR[j];
	AR[j]=AR[j+1];
	AR[j+1]=temp;
      }
    }
  }
}


void main()
{
  int item,N,index;

  cout<<"Enter data to be sorted \n";

  for(int i=0;i<5;i++)
  {
    cin>>AR[i];
  }
  int j;
  bsort(AR);

  cout<<"Sorted Array is \n";
  for(j=0;j<5;j++)
  {
    cout<<AR[j];
  }

}
