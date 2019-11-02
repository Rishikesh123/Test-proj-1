#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

struct node {
  lli x;
  struct node* ptr;
};
struct node* head=NULL;

node* create(lli t){
    node* temp= new node;
    temp->x=t;
    temp->ptr=NULL;
    return temp;
}

void insertfirst(lli t){
   node* temp=create(t);
   temp->ptr=head;
   head=temp;
}

void insertlast(lli t){
    node* temp=create(t);
    node* temp1=head;
    while(temp1->ptr!=NULL){
        temp1=temp1->ptr;
    }
    temp1->ptr=temp;
    temp->ptr=NULL;
}

void insertafter(lli x, lli t){
    node* temp =create(t);
    node* temp1=head;
    while(temp1->x!=x){
        temp1=temp1->ptr;
    }
    temp->ptr=temp1->ptr;
    temp1->ptr=temp;
}
void print(){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->x << " ";
        temp=temp->ptr;
    }
}

void DeleteFirst(){
    node* temp=head;
    if(head==NULL){
        cout << "WRONG ";
    }else{
        head=head->ptr;
        free(temp);
    }
}

void Delete(lli x){
    node* temp=head;
    node* prev;
    while(temp->x!=x){
        prev=temp;
        temp=temp->ptr;
    }
    prev->ptr=temp->ptr;
    free(temp);
}

void DeleteLast(){
    node* temp=head;
    node* prev;
    while(temp->ptr!=NULL){
        prev=temp;
        temp=temp->ptr;
    }
    prev->ptr=NULL;
    free(temp);
}

node* search(lli t){
    node* temp=head;
    while(temp->x!=t){
        temp=temp->ptr;
    }
    return temp;
}

void insertbefore(lli x, lli t){
    node* temp=create(t);
    node* temp1=head;
    node* prev;
    while(temp1->x!=x){
        prev=temp1;
        temp1=temp1->ptr;
    }
    prev->ptr=temp;
    temp->ptr=temp1;
}




int main(){
    

    insertfirst(6);
    insertfirst(5);
    insertfirst(4);
    insertfirst(8);
    insertfirst(26);
    insertfirst(54);
    insertafter(8,45);
    insertafter(5,4569);
    insertlast(96);
    insertlast(143);
    insertlast(7);
    DeleteFirst();
    Delete(5);
    DeleteLast();
    insertbefore(6,89);
    insertbefore(96,69);
    print();
}
