#include<iostream>

using namespace std;

int main(){
    int L,n;
    cin>>L;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //calc min time
    int minT=0;
    for(int i=0;i<n;i++){
        minT=max(minT,min(a[i],L-a[i]));
    }
    //calc max time
    int maxT=0;
    for(int i=0;i<n;i++){
        maxT=max(maxT,max(a[i],L-a[i]));
    }
    cout<<minT<<endl<<maxT<<endl;
}