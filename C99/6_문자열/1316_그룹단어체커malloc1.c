// 조건에 맞는 문자열을 찾는 문제

#include <stdio.h>
#include <stdlib.h>

int Cheker(char* s); // 그룹 단어 여부 확인 함수 

main() {
	char *tmp;
	char *s; // 알파벳 소문자로만 되어있는 단어 
	int turn; // 총 단어의 개수
	int count = 0;
	
	scanf("%d", &turn);
	
	while(turn) {
		tmp = (char*)malloc(sizeof(char) * 100);
		scanf("%s", tmp);
		
		s = (char*)malloc(sizeof(char) * strlen(tmp) + 1); // ' +1 ' 안해주면 ' 메모리 초과 ' 오류 발생
		strcpy(s, tmp);
		
		free(tmp); // 동적 할당 해제
		
		count += Cheker(s);
		
		free(s); // 동적 할당 해제 
		
		turn--;
	}	
	
	printf("%d\n", count);
}

int Cheker(char* s) {
	int i, j;
	
	for(i=0; i<strlen(s)-1; i++) {
		for(j=i+1; j<strlen(s); j++) {
			if(s[i] == s[j]) // 같은 문자 검색
				if(j-i > 1) // 같은 문자가 바로 옆에 붙어있지는 않은지 확인
					if(s[j-1] != s[j]) return 0; // 바로 전 문자와 이어지는 문자는 아닌지 확인
		}
	}
	
	return 1;
}