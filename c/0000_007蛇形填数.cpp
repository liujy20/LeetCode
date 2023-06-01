#include<cstdio>
using namespace std;
#define MAX 10
int a[MAX][MAX] = {0};
int main() {
	int n;
	scanf("%d", &n);
	int all = 1, x = 0, y = n - 1;
	a[x][y] = 1;
	while (all < n * n) {
//		printf("1");
//		防止数组越界x<n-1
		while (x < n-1 && !a[x+1][y]) {
			a[++x][y] = ++all;
			printf("%d", all);
		}
		while (y > 0 && !a[x][y-1]){
			a[x][--y] = ++all;
			printf("%d", all);
		}
		while (x > 0 && !a[x-1][y]){
			a[--x][y] = ++all;
			printf("%d", all);
		}
		while (y < n-1 && !a[x][y+1]){
			a[x][++y] = ++all;
			printf("%d", all);
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		//TODO
		for (int j = 0; j < n; j++) {
			//TODO
			printf("%03d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
