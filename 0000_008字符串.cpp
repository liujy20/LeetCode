#include<cstdio>
#include<cstring>
using namespace std;
#define MAX 10
int a[MAX][MAX] = {0};
int main() {
//	还有结束符"\0"
	char s[5]="char";
	printf("%llu\n",strlen(s));
	char buff[100];
//	复制s的值到buff
	strcpy(buff,s);
//	连接
	strcat(s,buff);
//	strlen(buff)真正有效的长度
	printf("%llu\n%s",strlen(buff),s);
	return 0;
}
