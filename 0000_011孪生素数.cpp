#include<cstdio>
#include<iostream>
using namespace std;
int prime(int a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int m;
	cin>>m;
	for(int i=m-2;i>=3;i--){
		if(prime(i)&&prime(i+2)){
			cout<<i<<' '<<i+2;
			break;
		}
	}
	return 0;
}
