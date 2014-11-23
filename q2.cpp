#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
  int arr[10]={rand()%1+0,rand()%3+1,rand()%6+4,rand()%8+7,rand()%10+9};
  int shift=0,amount,temp;

  cout<<"\n The Randomly Generated Sorted Array is: ";
  for(int i=0;i<5;i++)
  {
      cout<<arr[i]<<" ";
  }

  cout<<"\n Enter Type of Shift, Right or Left (0/1): ";
  cin>>shift;

  cout<<"\n Enter The Shift Amount(1-4): ";
  cin>>amount;

  if(shift==0){
    for(int i=0;i<5;i++)
    {

        if(i+amount+1<5){temp = arr[i];
        arr[i] = arr[i+amount];
        arr[i+amount] = temp;}
        else {temp = arr[i];arr[i] = arr[((i+amount)%5)];
        arr[((i+amount)%5)] = temp;}
  }
  }
  /*else if(shift==1){
    for(int i=0;i<5;i++)12345
    {
        temp = arr[i];
        arr[i] = arr[abs(i-amount)];
        arr[abs(i-amount)] = temp;
    }
  }*/

  cout<<"\n The Shifted-Sorted Array is: ";
  for(int i=0;i<5;i++)
  {
      cout<<arr[i]<<" ";
  }

}
