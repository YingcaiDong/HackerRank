#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int input;
struct treasure{
	int t3;
	int t5;
	int flag;
}treasure;
int find (int p){
	for (int i = 0;i < 100000;i++) {
		for (int j = 0;j < 100000;j++) {
			treasure.t3 = j * 3;
			treasure.t5 = i * 5;
			int k = treasure.t3 + treasure.t5;
			if (k == p) {
				treasure.flag = 1;//good
				break;
			}else if (k > p) {
				treasure.flag = 0;//bad
				break;
			}else {
				;
			}
		}
		if (treasure.flag == 1) {
			break;
		}else {
			;
		}
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int numTest;
	int result[40];
	scanf("%d", &numTest);
	for (int i = 0;i < numTest;i++) {
		scanf("%d", &input);

		find(input);
		if (treasure.flag == 1) {
			result[i*2] = treasure.t3;
			result[i*2+1] = treasure.t5;
		}else {
			result[i*2] = 0;
			result[i*2+1] = 0;
		}
	}
	for (int i = 0;i < numTest*2;i = i+2) {
		if (result[i] == 0 && result[i+1] == 0) {
			printf("-1\n");
		}else {
			if (result[i] == 0 && result[i+1] != 0) {
				for (int k = 0;k < result[i+1];k++) {
					printf("3");
				}
				printf("\n");
			}else if (result[i] != 0 && result[i+1] == 0) {
				for (int l = 0;l < result[i];l++) {
					printf("5");
				}
				printf("\n");
			}else {
				for (int q = 0;q < result[i];q++) {
					printf("5");
				}
				for (int w = 0;w < result[i+1];w++) {
					printf("3");
				}
				printf("\n");
			}
		}
	}
	return 0;
}
