#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
#define MAX 5000
char buf[MAX], s[MAX],p[MAX];
int main() {
//	接收可以含空格的输入 读取一行
	fgets(buf, sizeof(buf), stdin);

//	循环使用
	int i, j, k;
//	计算原位置
	int x,y;

//	数组长度
	int n, m = 0;
	n = strlen(buf);
//	获取所有字母并转换为大写
	for (i = 0; i < n; i++ ) {
		if (isalpha(buf[i])) {
//			保存字母在原字符串的位置
			p[m]=i;
			s[m++] = toupper(buf[i]);
			
		}
	}

//	最长回文串
	int max = 0;
	for (i = 0; i < m; i++) {
		for (j = i; j < m; j++) {
//			判断s[i~j]是否为回文串
			int f = 1;
			for (k = i; k <= j; k++) {
				if (s[k] != s[j - k + i]) {
					f = 0;
				}
			}
//			为回文串且大于max
			if (f && j - i + 1 > max) {
				max = j - i + 1;
				printf("max:%d\n",max);
//				保存开始和结束的位置
				x=i;
				y=j;
			}
		}
	}
//	从原字符串位置输出
	for(i=p[x];i<=p[y];i++){
		printf("%c",buf[i]);
	}
	printf("\n");
	printf("%d\n", max);

	return 0;
}
