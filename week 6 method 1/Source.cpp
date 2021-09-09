#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main() {
	int x[10];
	printf("Enter ten numbers : ");
	for (int i = 0; i != 10; i++) {
		scanf("%d", &x[i]);
	}
	printf("output : ");
	for (int i = 0; i != 10; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("result : ");
	for (int i = 1; i != 10; ++i) {
		if ((x[(i - 1)] + 2) % 2 != 0 && (x[(i + 1)] + 2) % 2 != 0) {
			int y = x[i];
			printf("%d ", x[i]);
		}
	}
	return 0;
}