#include <iostream>
using namespace std;

int main(){
		int A,B,C,x;
		int ans=0;
		cin>>A>>B>>C>>x;
		for(int i=0;i<=C;i++){
				for(int j=0;j<=B;j++){
						for(int k=0;k<=A;k++){
								if(i*50+j*100+k*500==x) ++ans;
						}
				}
		}
		cout<<ans<<endl;
		return 0;
}


		
