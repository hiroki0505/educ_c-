#include <iostream>
using namespace std;
int gcd(int a,int b)
{
		if(a%b==0){
				return b;
		}else if(b%a==0){
				return a;
		}else{
				
				return gcd(b,a%b);
		}
}
int main(){
		int a,b;
		cin>>a>>b;
		cout<<a<<"と"<<b<<"の最大公約数は:"<<gcd(a,b)<<endl;
		return 0;
}

