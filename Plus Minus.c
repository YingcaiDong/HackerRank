#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int len;
	scanf("%d", &len);
	
	double posi = 0; double nagi = 0; double zero = 0;
	int temp;
	for (int i = 0;i < len;i++) {
		scanf("%d", &temp);
		if (temp > 0) {
			posi += 1;
		}else if (temp == 0) {
			zero += 1;
		}else {
			nagi += 1;
		}
	}
	double fra_posi = posi/len;
	double fra_nagi = nagi/len;
	double fra_zero = zero/len;
	printf("%.3f\n%.3f\n%.3f\n", fra_posi, fra_nagi, fra_zero);
	return 0;
}
