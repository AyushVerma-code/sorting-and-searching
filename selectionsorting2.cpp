#include<iostream.h>
#include<conio.h>

void main()
{
  int i,j,temp,small,pos;

  int l;

  int m[10];

  cout<<"\nEnter 10 elements in unsorted manner ";

  for(l=0;l<10;l++)
  {
    cin>>m[l];
  }

  for(i=0;i<10;i++)
  {
    small=m[i];
    pos=i;

    for(j=i+1;j<10;j++)
    {
      if(m[j]<small)
      {
	small=m[j];
	pos=j;
      }

    }
    temp=m[i];
    m[i]=small;
    m[pos]=temp;

  }

  cout<<"\n\nSorted array ";

  int k;

  for(k=0;k<10;k++)
  {
    cout<<m[k]<<" ";
  }

getch();

}
