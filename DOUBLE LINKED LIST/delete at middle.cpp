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

void deletemiddle()
{
    struct node *p2,*p3,*p4;
   int key;
   cin>>key;
   p2=head;
   while(p2->data!=key)
   {
       p3=p2;
       p2=p2->next;
   }
   p4=p2->next;
   p3->next=p4;
   p2->prev=NULL;
   p4->prev=p3;
   p2->next=NULL;
   free(p2);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        insertatlast();
    }
    cout<<"\nList before deletion is : ";
    print();
    deletemiddle();
    cout<<"\nList After deletion is : ";
    print();
    return 0;
}