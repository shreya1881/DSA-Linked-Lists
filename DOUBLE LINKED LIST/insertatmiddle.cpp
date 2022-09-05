//Code on doubly linked list deletion at last
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;

void insertatlast()
{
    struct node *ptr,*p1;
    int value;
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(head==NULL)
    head=ptr;
    else
    {
        p1=head;
        while(p1->next!=NULL)
        {
            p1=p1->next;
        }
        p1->next=ptr;
        ptr->prev=p1;
    }
}

void print()
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

void insertmiddle()
{
    struct node *p2,*p3,*p4;
   int key;
   cin>>key;
   int info;
   cin>>info;
   p2=new node;
   p2->data=info;
   p2->next=NULL;
   p2->prev=NULL;
   p3=head;
   while(p3->data!=key)
   {
       p4=p3;
       p3=p3->next;
   }
   p4->next=p2;
   p2->prev=p4;
   p2->next=p3;
   p3->prev=p2;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        insertatlast();
    }
    cout<<"\nList before insertion is : ";
    print();
    insertmiddle();
    cout<<"\nList After insertion is : ";
    print();
    return 0;
}