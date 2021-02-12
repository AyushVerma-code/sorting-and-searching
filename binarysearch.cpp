#include<iostream.h>
#include<conio.h>

int bsearch(int AR[],int s)
{
  int beg,last,mid;
  beg=0;
  last=4;

  while(beg<=last)
  {
    mid=(beg+last)/2;

    if(s==AR[mid])
    {
      return mid;
    }
    else if(s>AR[mid])
    {
      beg=mid+1;
    }
    else if(s<AR[mid])
    {
      last=mid-1;
    }
    else
    continue;
 }
 return -1;
}


void main()
{
  int AR[5];
  int item,N,index;

  cout<<"Enter the data( 5 elements )\n";


  for(int i=0;i<5;i++)
  {
    cin>>AR[i];
  }

  cout<<"Enter data to be searched ";
  cin>>item;

  index=bsearch(AR,item);
  if(index==-1)
  {
    cout<<"\nData not found ";
  }
  else
  {
    int x=index+1;
    cout<<"\nData found at position "<<x;
  }
}
