#include<iostream>
#include<string>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
};
main()
{

    Node *Head=NULL;
    Node *Ptr=NULL;  
    
    Head  = new Node();
    Head->data=10;
    Head->next=NULL;
    
    Ptr  = new Node();
    Ptr->data=20;
    Ptr->next=NULL;
    
    Head -> next = Ptr;

    Ptr  = new Node();
    Ptr -> data = 30;
    Ptr -> next = NULL;
    
    Head->next->next=Ptr;
    
    Ptr  = new Node();
    Ptr -> data = 40;
    Ptr -> next = NULL;
    
    Head->next->next->next=Ptr;

    Ptr = Head;
    while(Ptr != NULL)
    {
        cout << Ptr->data << endl;
        Ptr = Ptr -> next;
    }
    cout<<endl;

    //update node
    // int pos;
    // cout<<"Enter Position to update:";
    // cin>>pos;
    // Ptr=Head;
    
    // for (int i = 0; i < pos; i++)
    // {
    //     Ptr=Ptr->next;
    // }
    // cout<<"Enter Element :";
    // cin>>Ptr->data;
    // cout<<endl;
    // Ptr = Head;

    // //read nodes

    // cout<<"After update node"<<endl;
    // while(Ptr != NULL)
    // {
    //     cout << Ptr->data << endl;
    //     Ptr = Ptr -> next;
    // }

    //delete 1st nodes
    Ptr=Head;

    Head=Head->next;
    delete Ptr;
    
    Ptr=NULL;
    Ptr=Head;

    cout<<"After delete 1st node"<<endl;
    while(Ptr != NULL)
    {
        cout << Ptr->data << endl;
        Ptr = Ptr -> next;
    }

    //delete last node
    Ptr=Head;
    if(Ptr->next->next!=NULL)
    {
        Ptr=Ptr->next;
    }
    delete Ptr->next;
    Ptr->next=NULL;
    Ptr=Head;
    cout<<"After delete last node"<<endl;
    while(Ptr != NULL)
    {
        cout << Ptr->data << endl;
        Ptr = Ptr -> next;
    }
    cout<<endl;
    //Reverse Linked List
    Node *next=NULL;
    Node *cnt=NULL;
    Node *prev=NULL;
    
    cnt=Head;
    while(cnt!=NULL)
    {
        next=cnt->next;
        cnt->next=prev;
        prev=cnt;
        cnt=next;
    }    
    Head=prev;
    cout<<"After Reverse\n";
    Ptr=Head;
    while (Ptr!=NULL)
    {
        cout<<Ptr->data<<" ";
        Ptr=Ptr->next;
    }
    
}