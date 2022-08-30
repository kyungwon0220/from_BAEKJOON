// 함수를 구현해 봅시다. (이 문제는 C, C++, Python, Java, Go만 지원합니다. 그 외의 언어를 사용하신다면 이 문제를 무시해 주세요.)

long long sum(int *a, int n) {
	long long sum=0;
	int *abc;
	
	abc = (int*)malloc(sizeof(int) * n); // 'int 크기 * n ' 크기 만큼 메모리 동적 할당
	 
	for(int i=0; i<n; i++) {
		abc[i] = a[i]; // 동적 할당한 메모리로 복사
		sum += abc[i];
	}
	
	free(abc); // 동적 할당 해제
	 
	return sum;
}