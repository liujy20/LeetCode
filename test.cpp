#include<iostream>
using namespace std;
int dg(int a){
	if(a==1){
		return 1;
	}
	return a*dg(a-1);
}
int main(){
	cout<<dg(3);
	
	return 0;
}
