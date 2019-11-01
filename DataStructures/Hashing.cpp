/*
                               ************HASHING************


Rabin-Karp Algorithm for Pattern Searching
Given a string (s) and a substring (sub) 
you have to print all occurences of the substring

*/
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int lli;
#define d 256

int main() 
{ 
    string s;
    string sub;
    cin >> s >> sub;
    lli m=sub.size();
    lli n=s.size();
    lli flag=0;
    if(m>n){
        cout << "NOT POSSIBLE";
        return 0;
    }else{
        lli SUB_HASH=0,S_HASH=0,i,p=1;
        //p=d^m;
        
        for( i=0;i<m;i++){
            SUB_HASH=(d*SUB_HASH+sub[i])%113;
            S_HASH=(S_HASH*d+s[i])%113;
            p=p*d;
            p%=113;
        }
      //  cout <<"p="<<p<<endl;
       // cout <<(256*256)%11<<"DRG"<<endl;
        lli j=m-1,k=1;
        while(j<n){
        if(SUB_HASH==S_HASH){
            cout <<k<< ". Found at index : " << j-m+1 <<" To "<<j<<endl; 
            k++;
            flag=1;
        }
        j++;
        S_HASH=(d*S_HASH - s[j-m]*p + s[j])%113;
        if(S_HASH<0){S_HASH+=113;}
    //    cout <<S_HASH<<" "<<j-m<<" "<<SUB_HASH<<" \n";
        }
        if(flag==0){
            cout << "NOT FOUND"<<endl;
        }
    }
	return 0; 
} 
