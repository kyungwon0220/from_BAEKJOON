// 함수를 구현해 봅시다. (이 문제는 C, C++, Python, Java, Go만 지원합니다. 그 외의 언어를 사용하신다면 이 문제를 무시해 주세요.)

long long sum(int *a, int n) {
	long long sum=0;
	
	for(int i=0; i<n; i++) sum+= a[i];
	
	return sum;
}