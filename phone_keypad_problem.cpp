#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void keypad(vector<string> &ans,string digits,vector<string>&map ,string temp,int index)
{
    if(index>=digits.size()){  
        ans.push_back(temp);
        return;
    }
    int int_digit= digits[index] - '0';
    string store=map[int_digit];
    for(int i=0;i<store.size();i++)
    {
        temp.push_back(store[i]);
        keypad(ans,digits,map,temp,index+1);
        temp.pop_back();        
    }
}
int main()
{
vector<string> ans;
string digits;
vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string temp;
int index=0;   
cin>>digits;
keypad(ans,digits,map,temp,index);

//printing the vector
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}
