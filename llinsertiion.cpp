#include <iostream> 
#include<stdlib.h>
using namespace std;
class node
{
    public:
   int data;
   node *next;
};
void printlist(node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void backinsertion(node*third,int newdata)
{
    node*newnode;
    newnode= new node();
    newnode->data=newdata;
    newnode->next=NULL;
    third->next=newnode;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=23;
    second-> next=third;
    third-> data=90;
    third-> next=NULL;
    printlist(head);
    cout<<endl;
    cout<<"after insertion in front"<<endl;
    backinsertion(third,3);
    printlist(head);
    return 0;
}