#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int len;
	scanf("%d", &len);
	for (int i = 0;i < len;i++) {
		for (int j = len-1;j > i;j--) {
			printf(" ");
		}
		for (int k = 0;k < i+1;k++) {
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
