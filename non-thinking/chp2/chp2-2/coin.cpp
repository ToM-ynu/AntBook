#include<iostream>

using namespace std;

const int V[6]={1,5,10,50,100,500};
int C[6],A;

void input(){
	for(int i=0;i<6;i++){
		cin>>C[i];
	}
	cin>>A;
}

int main(){
	input();
	int ans = 0;
	for(int i=5;i>=0;i--){
		int t=min(A/V[i],C[i]);
		A -=t*V[i];
		ans+=t;
	}
	cout<<ans<<endl;
	return 0;
}
