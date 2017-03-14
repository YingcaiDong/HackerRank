#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int output[100];
	int testCase;
	scanf("%d", &testCase);
	int numberInClass, leastAttend;
	int student;
	for (int j = 0;j < testCase;j++) {
		int attend = 0;
		scanf("%d %d", &numberInClass, &leastAttend);
		for (int i = 0;i < numberInClass;i++) {
			scanf("%d", &student);
			if (student <= 0) {
				attend = attend + 1;
			}else {
				attend = attend;
			}
		}
		if (attend >= leastAttend) {
			output[j] = 4;// means 'NO'
		}else {
			output[j] = 5;// means 'YES'
		}
	}
	
	for (int k = 0;k < 100;k++) {
		if (output[k] == 4) {
			printf("NO\n");
		}else if (output[k] == 5) {
			printf("YES\n");
		}else {
			break;
		}
	}
	return 0;
}
