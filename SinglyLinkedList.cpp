#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
}*head,*temp;

void beginsert(int);
void display();
void lastinsert(int);
void delbeg();
void delend();

int main(){
    beginsert(10);
    beginsert(20);
    beginsert(50);
    beginsert(80);
    beginsert(40);
    lastinsert(30);
    display();
    delbeg();
    display();
    delend();
    display();
    delend();
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

void delbeg(){
    if(head==NULL){
        cout<<"\nUNDERFLOW!!";
    }else{
        temp=head;
        head=head->next;
        delete temp;
    }
}

void delend(){
    node *prev=new node();
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete temp;
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