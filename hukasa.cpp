#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> meiro;
bool reached[501][501];



void search(int x, int y,int H,int W){
		if(x<0||W<=x||y<0||H<=y||meiro[x][y]=='#') return;
		if (reached[x][y])return;
		reached[x][y] =true;
		search(x+1,y,H,W);
		search(x,y+1,H,W);
		search(x-1,y,H,W);
		search(x,y-1,H,W);
}



int main(){
	int H,W;
	int sx,sy,gx,gy;
	cin>>H>>W;
	meiro.resize(H);
	for (int i=0;i<H;++i){
		string tmp;cin>>tmp;
		meiro[i]=tmp;
		for(int j=0;j<W;++j){
				if(meiro[i][j]=='s'){
						sy=i;sx=j;
				}
				if(meiro[i][j]=='g'){
						gy=i;gx=j;
				}
		}
	}							
	search(sx,sy,H,W);
	if(reached[gx][gy]){
			cout<<"Yes"<<endl;
	}else{ cout<<"No"<<endl;
	}
	return 0;
}

