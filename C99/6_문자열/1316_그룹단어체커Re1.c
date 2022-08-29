// 조건에 맞는 문자열을 찾는 문제

#include <stdio.h>

int Checkk(char *arr, int size); // 그룹 단어 여부 확인 함수 

main() {
	int N, size, tmp = 0;
	char arr[101];
	
	scanf("%d",&N); // 총 단어의 개수 
	
	while(N) {
		scanf("%s",arr);
		size = strlen(arr);
		// printf("%d\n",size); // debug
		
		tmp += Checkk(arr,size);
		N--;
	}
	
	// 결과(그룹 단어의 개수 출력 
	printf("%d\n",tmp);
}

int Checkk(char *arr, int size) {
	// printf("%s, %d\n", arr, size); // debug
	int i, j;
	
	for(i=0; i<size-1; i++) {
		for(j=i+1; j<size; j++) {
			if(arr[i] == arr[j]) // 같은 문자 검색 
				if(j-i > 1) // 같은 문자가 바로 옆에 붙어있지는 않은지 확인
					if(arr[j-1] != arr[j]) return 0; // 바로 전 문자와 이어지는 문자는 아닌지 확인
		}
	}
	
	return 1;
}