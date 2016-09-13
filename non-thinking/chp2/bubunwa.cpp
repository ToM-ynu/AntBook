#include<iostream>

using namespace std;
#define MAX_N 1000
int n,k, a[MAX_N];

void input(){
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
}

bool dfs(int i, int sum){
    if(i==n) return sum==k;
    if(dfs(i+1,sum)) return true;
    if(dfs(i+1,sum+a[i])) return true;
    return false;
}

int main(){
    input();
    if(dfs(0,0)){
        cout<<"yes";
    }else{
        cout<<"No";
    }
    cout<<endl;
    return 0;
}