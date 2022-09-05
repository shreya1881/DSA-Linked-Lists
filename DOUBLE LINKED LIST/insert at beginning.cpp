#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next,*prev;
}*head=NULL;
void insertatbegin()
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
        p1->prev=ptr;
        ptr->next=p1;
        head=ptr;
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
        insertatbegin();
    }
    print();
    return 0;
}