#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
//	直接输出
//	printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);

//	存储在变量中,方便输出,120输出021或者21
	int m = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
//	正常输出
	printf("%d\n",m);
//	0填充输出
	printf("%03d\n",m);
	return 0;
}
