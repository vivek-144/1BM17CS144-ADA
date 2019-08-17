#include <iostream>
using namespace std;
         
int floorSqrt(int x)  
{      
    if (x == 0 || x == 1)  
       return x; 

    int start = 1, end = x, ans;    
    while (start <= end)  
    {         
        int mid = (start + end) / 2; 

        if (mid*mid == x) 
            return mid; 

        if (mid*mid < x)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else
            end = mid-1;         
    } 
    return ans; 
} 

int main()  
{      
    int num; 
	cout<<"Enter the number : ";
	cin>>num;
    cout << floorSqrt(num) << endl; 
    return 0;    
} 