#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define MAX 10
//int a[MAX][MAX] = {0};
/*
	对于回文串,除了中间的字母可以是奇数其他字母在首尾均出现只能为偶数
	
	
	先获取每种字母个数
	对于第一组奇数个数的字母直接添加
	剩余奇数个数的字母,个数-1后添加
	偶数个数的字母直接添加
 */
int main() {
	string s;
	cin >> s;
	int a[s.length()][2];
	a[0][0] = s[0];
	a[0][1] = 1;
	int count = 0;
//	计算不同字母个数
	for (int i = 1; i < (int)s.length(); i++) {
		int t = 1;
		for (int j = 0; j <= count; j++) {
			if (a[j][0] == s[i]) {
				a[j][1]++;
				t = 0;
				break;
			}
		}
		if (t) {
			a[++count][0] = s[i];
			a[count][1] = 1;
		}
	}
	int sum = 0;
	int flag = 1;
//	偶数个数字母直接添加,奇数只添加一组字母
//	剩余奇数个数字母-1后添加
	for (int i = 0; i <= count; i++) {
		cout << a[i][1] << " ";
		if (a[i][1] % 2 == 0) {
			sum += a[i][1];
		} else {
			if (flag) {
				flag = 0;
				sum += a[i][1];
			} else {
				sum += a[i][1] - 1;
			}
		}
	}
	cout << sum;
	return 0;
}
