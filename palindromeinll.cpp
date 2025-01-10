//approach 1 --------------------------------------------
bool checkpalindrome(Node *head)
{
    //for using array approach of palindrome checking ,converting to arr
    Node* ptr = head;
    vector<int> arr;
    while(ptr != NULL){
    arr.push_back(ptr->data);
    ptr=ptr -> next;
    }
    
    //two int that will act as a ptr for comparision
    int startingint = 0;
    int lastint = arr.size()-1;
    
    while(startingint < lastint){
        if(arr[startingint] != arr[lastint]){
            return false;
        }
        startingint += 1;
        lastint -= 1;
    }
    return true;
}

class Solution {
  public:
    bool isPalindrome(Node *head) {
        bool ans;
        ans = checkpalindrome(head);
        return ans;
    }
};
