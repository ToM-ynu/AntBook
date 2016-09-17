#include<iostream>

using namespace std;
#define MAX_N 1000
#define MAX_M 1000
int N,M;
char field[MAX_N][MAX_M];
void input(){
    cin>>N;
    cin>>M;
    for(int i=0;i<N;i++){
        for(int j= 0;j<M;j++){
            cin>>field[i][j];
        }
    }
}
void dfs(int x,int y){
    field[x][y]='.';

    for(int dx=-1 ;dx<=1; dx++){
        for(int dy=-1;dx<=1;dy++){
            int nx=x+dx, ny=y+dy;
            if(0<=nx&&nx<N && 0<=ny && ny <M && field[nx][ny]=='W'){
                dfs(nx,ny);
            }
        }
    }
}

int main(){
    input();
    int res=0;
    for(int i= 0;i<N;i++){
        for(int j=0;j<M;j++){
            dfs(i,j);
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}