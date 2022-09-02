//DELETE THE FIRST ELEMENT AT THE BEGINING


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
        cout<<endl;
        
        
        
        //DELETION
        
      struct node *ptr1,*ptr2,*ptrprint;
      ptr1=head;
      ptr2=ptr1->next;
      head=ptr2;
      free(ptr1);
      
      ptrprint=head;
      while(ptrprint!=NULL){
          cout<<ptrprint->data<<" ";
          ptrprint=ptrprint->next;
      }
      
      
}  