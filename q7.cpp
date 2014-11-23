#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    int arr[10]={1,2,1,3,2,5,4,7,9,1};
    int sum=0,x;
    cout<<"\n Enter Number Whose Sum is to be found: ";
    cin>>x;
    for (int i = 0; i < 10; i++)
    {
        sum = arr[i];
        for (int j = i+1; j <= 10; j++)
        {
            if (sum == x)
            {
                cout<<"\nSum found between indexes "<<i<<" "<<j-1;
                return 1;
            }
            if (sum > x || j == 10)
                break;
           sum = sum + arr[j];
        }
    }

    cout<<"\nNo subarray found";
}
