#include <iostream>
#include <algorithm>
using namespace std;
int ksmallest(int a[],int n, int k)
{
  for(int i=0;i<=k;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
        min=j;
    }
    swap(a[i],a[min]);	
  }
  return a[k-1];
}
int main()
{
  int n,k;
  cout<<"Enter number of elements in array:";
  cin>>n;
  int a[n];
  
  for (int i=0;i<n;i++)
    cin>>a[i];
  n= sizeof (a)/sizeof (a[0]);
  cout<<"enter k:";
  cin>>k;
  cout<<"kth smallest element:\n"<< ksmallest(a,n,k);
  return 0;
}
