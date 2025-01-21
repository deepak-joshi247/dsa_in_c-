class Solution {
  private :
    void insertattail(Node* &clonehead, Node* &clonetail, int clonedata){ //we use & bcoz since we later want to use clonehead so 
                                                    // we update it globically
        Node* newnode = new Node(clonedata);
        if(clonehead == NULL){
            clonehead = newnode;
            clonetail = newnode;
            return;
        }
        clonetail -> next = newnode;
        clonetail = newnode;
        
    }
  public:
    
    Node *cloneLinkedList(Node *head) {
        if(head == NULL){               //if should be inside a clonelinkedlist() and not outside clonelinkedlist()
        return NULL;
        }
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        // step 1 make a clone of ognodes
        Node* temp = head;
        while(temp != NULL){
            insertattail(clonehead,clonetail,temp->data);
            temp = temp->next;
        }
        //step 2 mapping ognode with clonenode
        unordered_map<Node*, Node*> og_toclonemap;
        Node* ognode = head;
        Node* clonenode = clonehead;
        while(ognode != NULL){
            og_toclonemap[ognode] = clonenode;
            ognode = ognode -> next;
            clonenode = clonenode-> next;
        }
        // step 3 pointing random of clone
        ognode = head;
        clonenode = clonehead;
        while(ognode != NULL){
            clonenode -> random = og_toclonemap[ognode->random];
            clonenode = clonenode -> next;
            ognode = ognode ->next;
        }
        return clonehead;
    }
};
