 void Insert(int val,ListNode* &head,ListNode* &tail){
        ListNode* temp=new ListNode(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    ListNode* removeNodes(ListNode* head) {
        vector<int>vec;
        ListNode* temp=head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int n=vec.size();
        stack<int>st;
        for(auto i=n-1;i>=0;i--){
            if(!st.empty()&&vec[st.top()]<=vec[i])
            st.push(i);
            if(st.empty()){
                st.push(i);
            }
        }
        unordered_map<int,int>mp;
        vector<int>final;
        while(!st.empty()){
             final.push_back(vec[st.top()]);
            st.pop();
        }
        ListNode* newhead=  NULL;
        ListNode* tail=NULL;
        int newN=final.size();
        for(auto i=0;i<newN;i++){
            Insert(final[i],newhead,tail);
        }
        return newhead;
        
    }
