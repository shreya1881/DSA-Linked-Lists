#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void insert(struct node *ptr1, int value)
{
    struct node *ptr;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(head==NULL)
    head=ptr;
    else
    {
    
     while(ptr1->next!=NULL)
     {
         ptr1=ptr1->next;
     }
     ptr1->next=ptr;
    }
}
void print(struct node *head)
{
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void deleteatmiddle(struct node *p1, int key)
{
    struct node *p2;
    if(head==NULL)
    cout<<"No deletion";
    else
    {
        while(p1->data!=key)
        {
            p2=p1;
            p1=p1->next;
        }
        p2->next=p1->next;    
        free(p1);
    }
}
int main()
{
    int n;
    cin>>n;
    int value;
    while(n--)
    {
        cin>>value;
        insert(head,value);
    }
    print(head);
    int key;
    cin>>key;
    deleteatmiddle(head,key);
    print(head);
    return 0;
    
}
