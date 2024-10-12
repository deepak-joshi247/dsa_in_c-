#include<iostream>

using namespace std;
void check(int arr[],int size,int i)
{
    
    
    for (int j = 1; j <= i; j++)
    {
        if(arr[i-j]>arr[i])
            {
                swap(arr[i],arr[i-j]);
                i=i-1;
            }
else
{
    break;
}
    }

    }





void sort_this(int arr[],int size)
{
    for (int i = 1; i < size; i++)
    {
    
       if(arr[i-1]>arr[i])
       {
        
        check(arr,size,i);
       }
       
    }
    
}
int main()
{
int arr[5]={4,6,9,1,2};
int size=5;
sort_this(arr,size);
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}
return 0;
}