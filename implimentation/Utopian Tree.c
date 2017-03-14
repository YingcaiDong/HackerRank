#include <stdio.h>

int main(int argc, char *argv[]) {
	int output[10];
	int len;
	scanf("%d", &len);
	int year;
	for (int i = 0;i < len;i++) {
		scanf("%d", &year);
		int treeLen = 1;
		for (int j = 0;j < year;j++) {
			if (j%2 == 0) {
				treeLen = treeLen * 2;
			}else {
				treeLen += 1;
			}
		}
		output[i] = treeLen;
	}
	for (int p = 0;p < len;p++) {
		printf("%d\n", output[p]);
	}
	return 0;
}
