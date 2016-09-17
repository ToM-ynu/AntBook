#include<iostream>

using namespace std;

int N;
char S[1000];

void input(){
	cin>>N;
	for(int i=0;i<N;i++){
	cin>>S[i];
	}
}

int main(){
	input();
	
	int a=0,b=N-1;

	while(a<=b){
	bool left = false;
	for(int i=0;a+i<=b;i++){
		if(S[a+i]<S[b-i]){
			left=true;
			break;
		}else if(S[a+i]>S[b-i]){
			left= false;
			break;
		}
	}
	if(left==true) cout<<S[a++];
	else cout<<S[b--];
	}
	cout<<endl;
	return 0;
}

