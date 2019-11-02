#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli arr[100000];
lli front=-1;
lli rear=-1;

bool is_Empty(){
    if(front==(rear)||rear==-1){
        return true;
    }else{
    return false;
    }
}

bool is_full(){
    if((rear==999999)){
        return true;
    }else{
        return false;
    }
}
void enqueue(lli t){
   if(!is_full()){
    rear++;
    arr[rear]=t;
   }else{
       cout <<"FULL ";
    }
}
void dequeue(){
   if(!is_Empty()){
    front++;
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
        enqueue(i);
    }
   //  cout <<endl;
   //
    for(lli i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
     for(lli i=0;i<100;i++){
        dequeue();
    }
    cout << front << " "<<rear<<endl;
    /*dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();*/
  
   
        
    
}
