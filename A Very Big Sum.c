long long int add(long long int i, long long int j){
	return i+j;
}

int main(int argc, char *argv[]) {
	int len, cnt;
	scanf("%ld", &len);
	
	long long int sum = 0;
	long long int y;
	for (cnt = 0;cnt < len; cnt++) {
		scanf("%ld", &y);
		sum = add(sum, y);
	}
	printf("%ld", sum);
	return 0;
}
