#include<iostream>

using namespace std;

int main()
{
    int size,x,n1,n2,n3,temp,sum=0;
    cout<<"Enter Array Size: ";
    cin>>size;
    int arr[size],nums[3];
    cout<<"\n Enter Array: ";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Enter The Number whose triplet is to be determined: ";
    cin>>x;

    for(int i=0; i<size-1 ; i++)
    {
        for(int j=0;j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0,j=0; i<size,j<3; i++)
    {
        if(sum!=x){
            if(arr[i]<x && j<3){arr[i]=nums[j];j++;sum+=nums[j];}
            else {cout<<"\n Triplet Not Found";}
        }
    }

    cout<<"\n The Numbers are: ";
    for(int k=0; k<3; k++)
    {
        cout<<nums[k]<<" ";
    }
}
