#include<iostream>
#include<sys/time.h>

using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
int  memo[1000]={};
//fibo memo
int fib_memo(int n){
    if(n<=1) return n;
    if(memo[n]!=0) return memo[n];
    return memo [n]= fib(n-1)+fib(n-2);
} 

int main(){
    int n=40;
    //cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}