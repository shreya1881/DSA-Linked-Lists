//Program to insert element in middle of linked list
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL,*p1,*ptr,*p2;
int main()
{
    int n;
    cin>>n;
    int value;
    while(n--)
    {
        cin>>value;
        p1=new node;
        p1->data=value;
        p1->next=NULL;
        if(head==NULL)
        head=p1;
        else
        {
            ptr=head;;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=p1;
        }
    }
        p2=head;
        while(p2!=NULL)
        {
         cout<<p2->data<<" ";
        p2=p2->next;
        }
    int key;
    cin>>key;
    int info;
    cin>>info;
    struct node *ptr1,*ptr2,*ptr3,*p;
    ptr1=head;
    while(ptr1->data!=key)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
        ptr3=new node;
        ptr3->data=info;
        ptr2->next=ptr3;
        ptr3->next=ptr1;
     p=head;
     while(p!=NULL)
     {
         cout<<p->data<<" ";
         p=p->next;
     }
   return 0; 
}
    