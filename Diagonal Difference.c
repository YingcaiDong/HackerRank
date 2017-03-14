#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int addition(int x, int y){
	return x+y;
}

int main(int argc, char *argv[]) {
	int len;
	scanf("%d", &len);
	int temp, x, y;
	int sum_x = 0;
	int sum_y = 0;
	for (int i = 0;i < len;i++) {
		for (int j = 0;j < len;j++) {
			if (i == j && i+j+1 != len) {
				scanf("%d", &x);
				sum_x = addition(sum_x, x);
			}else if (i == j && i+j+1 == len) {
				scanf("%d", &x);
				sum_x = addition(sum_x, x);
				
				y = x;
				sum_y = addition(sum_y, y);
			}else if (i != j && i+j+1 == len) {
				scanf("%d", &y);
				sum_y = addition(sum_y, y);
			}else {
				scanf("%d", &temp);
			}
		}
	}
	int sum;
	sum = sum_x - sum_y;
	sum = abs(sum);
	printf("%d", sum);
	return 0;
}
