#include<cstdio>
#include<cstring>
#include<ctime>
using namespace std;
//大数组尽量开在main外面
#define MAX 100000
//int a[MAX];
int main() {
//	int b[10000000000];
//	b[1]=1;
//	printf("%d",b[1]);

	int a[5] = {1, 2, 3, 4, 5};
	int b[5];
	
//	复制数组
	memcpy(b, a, sizeof(a));
//	数组清零
	memset(a,0,sizeof(a));
	int length = sizeof(b)/sizeof(int);
	for (int i = 0; i < length; i++) {
		printf("%d\n", b[i]);
	}
//	程序运行时间 需要使用ctime
//	printf("%.4lf",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}
