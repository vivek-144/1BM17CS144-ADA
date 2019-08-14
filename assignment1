#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, char **argv)
{
  
  clock_t start,end;
  double time_taken;
  start=clock();

  

  int array[10], maximum, size, c, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;

  
  end=clock();
  time_taken=((double)(end-start))/CLOCKS_PER_SEC;
  cout<<"time taken"<<time_taken;
  
}
