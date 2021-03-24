#include<stdio.h>
int main() {
	int a;
	int arr[10];
	int i, j;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("请输入要插入的值：\n");
	scanf_s("%d", &a);

	for (i = 0; i < sz - 1; i++) {
		for (j = 0; j < sz - 1 - i; j++) {

			if (arr[j + 1] > arr[j]) {
				int max = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = max;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d    ", arr[i]);
	}


	for (i = 0; i < sz ; i++) {
		for (j = 0; j < sz  - i; j++) {
			if (arr[j] > a && a > arr[j + 1]) {
				arr[j + 2] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (i = 0; i < sz+1 ; i++) {
		printf("%d  ", arr[i]);
	}
	return 0;
}