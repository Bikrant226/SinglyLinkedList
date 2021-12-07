#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
}*head,*temp;

void beginsert(int);
void display();
void lastinsert(int);

int main(){
    beginsert(10);
    beginsert(20);
    lastinsert(30);
    display();
  
    return 0;
}

void beginsert(int value){
    struct node *ptr;
    ptr=new node();

    if(ptr==NULL){
        cout<<"OVERFLOW!!!\n";
    }else{
        ptr->data=value;
        ptr->next=head;
        head=ptr;
    }
}


void lastinsert(int value){
    struct node *ptr=new node();
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->data=value;
    ptr->next=NULL;
}

void display(){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"\n";
}