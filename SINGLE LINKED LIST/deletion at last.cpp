#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL,*ptr,*ptr1,*p1,*p2,*ptr2,*p;
int main()
{
    int n,i;
    cin>>n;
    int value;
    while(n--)
    {
       cin>>value;
       ptr=new node;
       ptr->data=value;
       ptr->next=NULL;
       if(head==NULL)
       head=ptr;
       else
       {
           ptr1=head;
           while(ptr1->next!=NULL)
           {
               ptr1=ptr1->next;
           }
           ptr1->next=ptr;
       }
       
    }
    cout<<"\nThe linked list is before deletion : ";
    p1=head;
    while(p1!=NULL)
    {
    cout<<p1->data<<" ";
    p1=p1->next;
    }
    
    if(head==NULL)
    cout<<"No Deletion"<<endl;
    else
    {
        ptr2=head;
        while(ptr2->next!=NULL)
        {
            p=ptr2;
            ptr2=ptr2->next;
        }
        p->next=NULL;
        free(ptr2);
    }
    cout<<"\nThe list after deletion is : ";
    p2=head;
    while(p2!=NULL)
    {
    cout<<p2->data<<" ";
    p2=p2->next;
    }
    return 0;
}