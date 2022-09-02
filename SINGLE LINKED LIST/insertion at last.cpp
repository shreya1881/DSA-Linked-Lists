#include <iostream>
using namespace std;


struct Node{
   int data;
   struct Nodenext;
}head, *ptr, ptr1,ptr2;

int main()
{
    int value;
    int n;
    cin>>n;
    head=NULL;
    for (int i=0; i<n;i++){
        cin>>value;
        ptr= new Node;
        ptr->data=value;
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
        }
        else{
            ptr1=head;
            while(ptr1->next!=NULL)
            ptr1=ptr1->next;
            ptr1->next =ptr;
        }
    }

        ptr2=head;
        while(ptr2!=NULL){
            cout<<ptr2->data<<" ";
            ptr2=ptr2->next;
        }


}
