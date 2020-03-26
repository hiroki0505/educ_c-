#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<utility>
#include<queue>
using namespace std;

vector<string> grid; //グリッドを記録
bool visit[501][501]; //グリッドを通過したか．
int sy,sx,gy,gx; //スタートとゴールの座標
int dy[]={1,-1,0,0};
int dx[]={0,0,1,-1};

bool dfs(int y, int x){
    if(y==gy&&x==gx)	return true; //ゴールならtrueを返す.
}

int main(){
    int H,W; cin>>H>>W;
    grid.resize(H+2); //配列をH+2要素分確保しておく（毎回push_backより速い）
    string edge = string(W+2,'#'); //'#'をW+2回繰り返して文字列を作る
    grid[0]=edge; grid[H+1]=edge; //入力のグリッドの周りを塀で囲むことで境界の条件分岐をなくす
    memset(visit,0,sizeof(visit));
    for(int i=1;i<=H;++i){
        string tmp; cin>>tmp;
        grid[i]="#"+tmp+"#";
        for(int j=1;j<=W;++j){
            if(grid[i][j]=='s'){
                sy=i; sx=j;
            }
            if(grid[i][j]=='g'){
                gy=i; gx=j;
            }
        }
    }

	pair<int,int> s=make_pair(sy,sx);
	queue<pair<int,int>> q;
	q.push(s);
	visit[sy][sx]=true;
	while(q.empty()==0){
		pair<int,int>node=q.front();
		q.pop();
		dfs(node.first,node.second);
		for(int i=0;i<4;++i){
			int ny=node.first+dy[i],nx=node.second+dx[i];
			pair<int,int>ns=make_pair(ny,nx);
			if(grid[ns.first][ns.second]!='#'){
				if (visit[ny][nx]==0){
					q.push(ns);
					visit[ny][nx]=true;
					}
			}
		}
			//cout<<"x"<<node.second<<":"<<"y"<<node.first<<endl;
	}

	if(visit[gy][gx]){
	cout<<"Yes"<<endl;
	}else{
			cout<<"No"<<endl;
	}
    return 0;
}

