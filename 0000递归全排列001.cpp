#include<iostream>
using namespace std;
//打印数组
void printArr(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}
	cout << endl;
}
//交换数组元素
void swap (int *arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
/**
 * @brief 递归全排列
 *
 * @param arr 进行排列的数组
 * @param key 从key下标开始排列
 * @param len 数组长度
 *
 * @return 子排列的个数
 */
int permutation (int *arr, int key, int len) {
	int count = 0;
//	如果剩余最后一个元素无需继续排列,直接退出
	if (key + 1 == len) {
		printArr(arr, len);
		return 1;
	}
	int i = 0;
	for (i = key; i < len; i++) {
//		锁定一个元素arr[key]
		swap(arr, key, i);
//		arr[key]后面的子数组继续递归排列
		count += permutation(arr, key + 1, len);
//		还原数组,方便下一次循环更换锁定元素
		swap(arr, key, i);
	}
	return count;
}
int main() {
	int len;
	int count = 0;
	cin >> len;
	int arr[len];
	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}
	count += permutation(arr, 0, len);
	cout << count;
//	printArr(arr, len);
	return 0;
}
