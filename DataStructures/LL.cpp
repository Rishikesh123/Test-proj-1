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
    temp->ptr=NULL;
    node* temp1=head;
    node* prev;
    if(head==NULL){
        head=temp;
        return;
    }
    while(temp1!=NULL){
        prev=temp1;
        temp1=temp1->ptr;
    }
    prev->ptr=temp;
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
node* searchprev(lli t){
    node* temp=head;
    node* prev=head;
    while(temp->x!=t){
        prev=temp;
        temp=temp->ptr;
    }
    return prev;
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
/*
void swapp(lli a, lli b){
    node* t1=search(a);
    node* t2=search(b);
    node* t1next,*t2next,*t1prev,*t2prev;
    t1next=t1->ptr;
    t2next=t2->ptr;
    t1->ptr=t2next;
    t2->ptr=t1next;
    node* prev1=searchprev(a);
    node* prev2=searchprev(b);
    prev1->ptr=t2;
    prev2->ptr=t1;
}

*/

int main(){
    lli n,q;
    cin >> n >> q;
    for(lli i=0;i<n;i++){
        lli t;
        cin >>t;
        insertlast(t);
        insertfirst(t);
    }
    
    print();
}
