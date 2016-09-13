#include<iostream>

const int INF=1000000;
const int MAX_N=10000;
const int MAX_M=10000;
typedef pair<int,int> P;

char maze[MAX_N][MAX_M+1];
int N, M;
int sx,sy;
int gx,gy;

int d[MAX_N][MAX_M]

int ds[4]={1,0,-1,0},dy[4]={0,1,0-,1};

void input(){
    cin>>N;
    cin>>M;
    for(int i=0;i<N;i++){
        for(int j=0;i<M;j++){
            cin>>d[i][j];
        }
}

int bfs(){
    queue<P> que;
    //initialize
    for(int i=0;i<N;i++){
        for(int j=0;i<M;j++){
            d[i][j]=INF;
        }
            que.push(P(sx,sy));
            d[sx][sy]=0;

            while(que.size()){
                P p=que.front(); que.pop();
                if(p.first==gx && p.second==gy) break;

                for(int i=0;i<4;i++){
                    int nx=p.first+dx[i],ny=p.second+dy[i];

                    if(0<=nx&&nx<N&&0<=ny&&ny<M&&maze[nx][ny]!='#' && d[nx][ny]==INF){
                        que.push(P(nx,ny));
                        d[nx][ny]=d[p.first][p.second]+1;
                    }
                }
            }
            return d[gx][gy];
        }
        void solve(){
            int res=bfs();
            cout<<res;
        }
    }
}