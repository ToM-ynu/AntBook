#include<iostream>

using namespace std;

const int MAX_N =10000;

int W[1000];
int V[MAX_N];
int n,w;
void input(){
    cin>>n;
        for(int i= 0;i<n;i++){
                cin>>W[i];
                cin>>V[i];
        }
    cin>>w;
}
int rec(int i,int j){
    int res;
    if(i==n){
        res=0;
    }else if(j<W[i]){
        res=rec(i+1,j);
    }else {
            res=max(rec(i+1,j),rec(i+1,j-W[i])+V[i]);
            // max in or not-in
    }
    return res;
}

int main(){
    input();
    cout<<rec(0,w);
    return 0;
}