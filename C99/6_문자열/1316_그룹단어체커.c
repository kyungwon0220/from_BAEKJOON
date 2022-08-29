// 조건에 맞는 문자열을 찾는 문제

#include <stdio.h>

int CheckSum(char *M, int len);

main() {
	char M[101];
	int N, size, sum=0;
	
	scanf("%d",&N); // 단어의 개수 
	
	while(N) {
		scanf("%s",M); // 단어
		size = strlen(M);
		//printf("%d\n",size); // debug
		sum+= CheckSum(M,size);
		N--;
	}
	
	//결과 출력 
	printf("%d\n",sum);
}

int CheckSum(char *M, int len) {
	
	int i, j;

	//printf("%s, %d\n", M, len); // debug
	for(i=0; i<len-1; i++) {
		for(j=i+1; j<len; j++) {
			if(M[i] == M[j]) {
				if((j-i) > 1)
					if(M[j-1] != M[j]) return 0;
			}
		}
	}
	
	return 1;
}