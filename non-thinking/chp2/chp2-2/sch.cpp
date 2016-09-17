#include<iostream>
#include<algorithm>
#include<map>
#include<utility>
const int MAX_N = 100000;
using namespace std;

int N,S[MAX_N],T[MAX_N];

pair<int, int> itv[MAX_N];

void input(){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>S[i];
	}
	for(int i=0;i<N;i++){
		cin>>T[i];
	}

}

int main(){
	input();
	for(int i=0;i<N;i++){
	itv[i].first=T[i];
	itv[i].second=S[i];
	}
	sort(itv,itv+N);
	
	int ans = 0,t=0;
	for(int i=0;i<N;i++){
		if(t<itv[i].second){
			ans++;
			t=itv[i].first;
		}
	}
	cout<<ans<<endl;
	return 0;
}
