    //  void insertAtIdx(int idx ,int val) {
    //     if(idx<0 || idx>size) cout<<"INVALID INDEX"<<endl;
    //     else if(idx==0) insertAtHead(val);
    //     else if(idx==size) insertAtEnd(val);
    //     else{
    //          Node*t = new Node(val);
    //          Node*temp =head;
    //          for(int i=0;i<=idx-1;i++){
    //             temp=temp->next;
    //          }
    //          t->next =temp->next;
    //          temp->next =t;
    //          size++;
    //     }
    // }