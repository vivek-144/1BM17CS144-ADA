#include<iostream>
using namespace std;


int partition(int a[],int low,int high){


int pivot,i,j;

pivot=a[low];

i=low+1;

j=high;

while(1) {

while (a[i]<=pivot and i<=high) { i=i+1; }

while (a[j]> pivot and j>=low ) { j=j-1; }

if (i<j)

{
int c=a[i];
a[i]=a[j];
a[j]=c;
}

else {

a[low]=a[j]; 
a[j]=pivot;

return j;

} }
}

int QuickSort(int a[],int low, int high)
{
int pivot_pos;
if (low<high){


pivot_pos=partition(a,low,high); 

QuickSort(a,low, pivot_pos-1);

QuickSort(a, pivot_pos+1,high);
}
return 0;
}
int a[15],n;
int main(){
int i;
cout<<"enter size of the array:/n";
cin>>n;
cout<<"enter the array elements/n";
for(i=0;i<n;i++){
cin>>a[i];
}
QuickSort(a,0,n-1);
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}

