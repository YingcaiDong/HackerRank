#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int complementation(int x){
	int result;
	result = x%26;
	return result;
}

int main() {
	int c, k, cip, flag1, flag3, flag4;
	char m, input[256];
	scanf("%d", &k);
	scanf("%s", input);
	scanf("%d", &cip);
	cip = complementation(cip);
	for (int i = 0;i < k;i++) {
		c = input[i];
		for (int j = 33;j < 65;j++) {
			if (c == j) {
				flag1 = 0;
				break;
			}else {
				flag1 = 1;
			}
		}
		for (int j = 91;j < 97;j++) {
			if (c == j) {
				flag3 = 0;
				break;
			}else {
				flag3 = 1;
			}
		}
		for (int j = 123;j < 127;j++) {
			if (c == j) {
				flag4 = 0;
				break;
			}else {
				flag4 = 1;
			}
		}
		
		int sum;
		sum = flag1 * flag3 * flag4;
		
		if (sum == 0) {
			m = c;
		}else {
			int flag_a;
			for (int j = 65;j < 91;j++) {
				if (c == j) {
					flag_a = 0;
					break;
				}else {
					flag_a = 1;
				}
			}
			c = c + cip;
			if (flag_a == 1) {
				if (c > 122) {
					m = c - 26;
				}else {
					m = c;
				}
			}else {
				if (c > 90) {
					m = c - 26;
				}else {
					m = c;
				}
			}			
		}
		printf("%c", m);
	}
	return 0;
}
