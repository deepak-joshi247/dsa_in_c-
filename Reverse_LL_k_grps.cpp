//to get whether to reverse or not
bool checking(Node* head, int k)
{
    Node* curr= head;
    int cnt=0;
    while(curr!= NULL && cnt<k)
    {
        curr=curr->next;
        cnt++;
    }
    if(cnt==k)
    {
        return true;
    }
    else{
        return false;
    }
}

Node* kReverse(Node* head, int k) {
    //base
    if(head==NULL)
    {
        return NULL;
    }
    
    //checking if to be rev or not
   bool ans=checking(head,k);

   //reverse 1k unit place
   Node* ptr = NULL;
   Node* pre=NULL;
   Node* curr= head;
   int cnt=0;
   while(curr!= NULL && cnt<k)
   {
       ptr=curr->next;
       if(ans) //so only needed one get reversed
       {
           curr->next=pre;
       }
       pre=curr;
       curr=ptr;
       cnt++;
   }
   //recursion
   if(ptr!=NULL)
    {
        head->next=kReverse(curr,k);
    }
    /*if it is reversed then head is pre so we return pre 
     but if it is not reversed than head is head */
    if (ans) {
        return pre;
    }
    else{
        return head;
    }
}
