#include<iostream>
#include<cmath>
using namespace std;
int sort(int n,int arr[])
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++) //j=i+1 is declared only at start and not in btw
        {
        bool possible=false;
            
            if(arr[i]>arr[j])
            {
                possible=true;
            }
            if(possible){
            swap(arr[i],arr[j]);
            
        }
        }
        
    }
    return 1;
}
int main()
{
    int arr[10]={4,5,2,7,8,3};
    int n=6;
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(n,arr);
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
return 0;
}