#include <iostream>
#include<vector>
#include<stack>
#include<utility>
using namespace std;
int  IMF= 1000000000;
int main(){
 int n; 
 cin>>n;
 vector<pair<int,int>> tonari[100010];
 for(int i=0;i<n;i++){
		 int u,k,c,v;
		 cin>>u>>k;
		 for (int j=0;j<k;++j){
				 cin>>c>>v;
				 tonari[u].push_back(make_pair(c,v));
	
	}
 }
 int dist[n];
 for(int i=0;i<n;i++){
	dist[i]=IMF;
 }
 dist[0]=0;
 bool det[n];
 for(int i=0;i<n;i++){
	int mini=IMF;
	int mini_node=-1;
	for(int j=0;j<n;j++){
		 if ((!det[j]) &&( dist[j]<mini)){
				 mini = dist[j];
				 mini_node =j;
		 }
	}
	det[mini_node]=true;
	for(pair<int,int>n:tonari[mini_node]){
			dist[n.first]=min(dist[n.first],dist[mini_node]+n.second);
//cout<<dist[n.first]<<endl;	
	}
}

	for(int j=0;j<n;j++){
	cout<<j<<" "<<dist[j]<<endl;
}
}
		 

