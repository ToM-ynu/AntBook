#include<iostream>
#include<algorithm>
#define MAX_N 100000

using namespace std;
int n,m,k[MAX_N];
void input(){
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
} 

bool binary_serch(int x){
    int l=0,r=n;
    while(r-l>=1){
        int i=(l+r)/2;
        if(k[i]==x){
            return true;
        }else if(k[i]<x){
            l=i+1;
        }else{
            r=i;
        }
        return false;
    }
    return false;
}

int main(){
    input();
    sort(k,k+n);
    bool f=false;
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            for(int c=0;c<n;c++){
                if(binary_serch(m-(k[a]+k[b]+k[c]))){
                    f= true;
                    goto loopout;
                }
            }
        }
    }
    loopout:
    if(f==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}