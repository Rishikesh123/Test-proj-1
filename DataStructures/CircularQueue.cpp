#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli arr[10];
lli front=-1;
lli rear=-1;

bool is_Empty(){
    if(front==(rear)%10||rear==-1){
        return true;
    }else{
    return false;
    }
}

bool is_full(){
    if((rear+1)%10==front%10||(front==-1&&rear==9)){
        return true;
    }else{
        return false;
    }
}
void enqueue(lli t){
   if(!is_full()){
    rear++;
    rear%=10;
    arr[rear]=t;
   }else{
       cout <<"FULL ";
    }
}
void dequeue(){
   if(!is_Empty()){
    front++;
    front%=10;
    lli d=arr[front];
    cout << d<<" ";
    }else{
        cout <<"EMPTY ";
    }
}




int main(){
    lli n;
    cin >> n;
    for(lli i=0;i<n;i++){
        lli t;
        cin >> t;
        enqueue(t);
    }
     cout <<endl;
   // cout << front << " "<<rear<<endl;
    for(lli i=0;i<10;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
  
   
        
    
}
