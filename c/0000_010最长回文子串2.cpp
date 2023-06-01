#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
#define MAX 5000
char buf[MAX], s[MAX];
int p[MAX];
int main() {
//	接收可以含空格的输入 读取一行
	fgets(buf, sizeof(buf), stdin);//zxca, sddd.sa
//	for (int i = 0; i < 4000; i++) {
//		buf[i] = 'a';
//	}

//	循环使用
	int i, j;
//	计算原位置
	int x, y;

//	数组长度
	int n, m = 0;
	n = strlen(buf);
//	获取所有字母并转换为大写
	for (i = 0; i < n; i++ ) {
		if (isalpha(buf[i])) {
//			保存字母在原字符串的位置
			p[m] = i;
			s[m++] = toupper(buf[i]);

		}
	}

//	最长回文串
	int max = 0;
	for (i = 0; i < m; i++) {
//		奇数回文串
		for (j = 0; i - j >= 0 && i + j < m; j++) {
			if (s[i - j] != s[i + j]) {
				break;
			}
			if (2 * j + 1 > max) {
				max = 2 * j + 1;
				x = i - j;
				y = i + j;
			}
		}
//		偶数回文串
		for (j = 0; i - j >= 0 && i + j < m; j++) {
			if (s[i - j] != s[i + j + 1]) {
				break;
			}
			if (2 * j + 2 > max) {
				max = 2 * j + 2;
				x = i - j;
				y = i + j + 1;
			}
		}
	}
//	原字符串位置
	printf("%d %d\n", p[x], p[y]);
//	从原字符串位置输出
	for (i = p[x]; i <= p[y]; i++) {
		printf("%c", buf[i]);
	}
	printf("\n");
//	输出长度
	printf("%d\n", max);

	return 0;
}
