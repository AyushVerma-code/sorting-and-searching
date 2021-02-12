#include<iostream.h>
#include<conio.h>

void insertsort(int list[],int n)
{
  int i,j,k,temp;

  for(i=1;i<n;i++)
  {
    temp=list[i];
    j=i-1;

    while((temp<list[j])&&j>=0)
    {
      list[j+1]=list[j];
      j--;
    }

    list[j+1]=temp;

    cout<<"\nData after pass :"<<i<<" ";



    for(k=0;k<n;k++)
    {
      cout<<list[k];
    }
  }
}
void main()
{
  clrscr();

  int r=10;
  int m[10];

  cout<<"\nEnter the 10 elements in array ";

  for(int l=0;l<r;l++)
  {
    cin>>m[l];
  }

  insertsort(m,r);
  getch();
}
