#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next,*prev;
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
    cout<<"\nThe linked list is : ";
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        insertatlast();
    }
    print();
    return 0;
}