#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add(int a, int b){
	return a+b;
}

int main() {
    int len,cnt;
	scanf("%d", &len);
	
	int init_i, init_j, sum;
	sum = 0;
	
	int y;
	for (cnt = 0; cnt < len;cnt++) {
		scanf("%d", &y);
		sum = add(sum, y);
	}
	printf("%d", sum);
	return 0;
}

