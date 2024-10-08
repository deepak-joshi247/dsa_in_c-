#include<iostream>
#include<cmath>
using namespace std;
int bubble(int arr[],int size)
{
  for (int i = 0; i < size-1; i++)
  {
        
    bool cont=false;
    for (int j = 0; j < size-i-1; j++)
    {   
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            cont=false;
        }
        else{
            cont=true;
        }
        
    }
    
    if(cont){  //  to reduce time complexity if applicable
        break;
    }
  }
    
    
    return 1;
}
int main()
{
int arr[100]={4,8,6,2};
int size=4;
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
bubble(arr,size);
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
