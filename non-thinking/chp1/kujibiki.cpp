#include<iostream>

using namespace std;


void fourloop(){
	int n, m;
	cin>>n;
	cin>>m;
	int k[n];
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	bool f= false;
	for(int a=0;a<n;a++){
		for(int b= 0;b<n;b++){
			for(int c= 0;c<n;c++){
				for(int d=0;d<n;d++){
					if(k[a]+k[b]+k[c]+k[d]==m){
						f=true;
					}
				}
			}
		}
	}
	if(f==true){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	cout<<endl;
}

void fourloop_s(){
	int n, m;
	cin>>n;
	cin>>m;
	int k[n];
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	bool f= false;
	for(int a=0;a<n;a++){
		for(int b= 0;b<n;b++){
			for(int c= 0;c<n;c++){
				for(int d=0;d<n;d++){
					if(k[a]+k[b]+k[c]+k[d]==m){
						f=true;
						goto finish;
					}
				}
			}
		}
	}
finish:
	if(f==true){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	cout<<endl;
}


int main(){
	//fourloop();
	fourloop_s();	
return 0;
}
