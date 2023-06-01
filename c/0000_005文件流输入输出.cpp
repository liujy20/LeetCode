#include<cstdio>
#include<ctime>
#include<fstream>
using namespace std;
ifstream fin("test.in");
ofstream fout("test.out");
int main() {
	long long a;
	fin>>a;
	for (int i = 0; i <= a; i ++) {
		fout<< i;
	}
	
	return 0;
}
