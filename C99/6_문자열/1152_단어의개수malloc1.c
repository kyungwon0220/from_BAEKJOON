// 단어의 개수를 구하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	char *tmp = (char*)malloc(sizeof(char) * 1000000);
	char *s; // 영어 대소문자와 공백으로 이루어진 문자열
	int count = 0;
	
	scanf("%[^\n]", tmp); // %[^\n] == ' \n(엔터) ' 가 나오기까지 문자열로 받는다(공백 포함
	
	s = (char*)malloc(sizeof(char) * strlen(tmp));
	strcpy(s, tmp);
    
	free(tmp); // 동적 할당 해제
    
    
	if(s[0] != ' ') count++;
	for(int i=1; i<strlen(s); i++)
		if(s[i-1] == ' ' && s[i] != ' ') count++;
	
	free(s); // 동적 할당 해제 
	
	printf("%d\n", count); // 결과(단어의 개수 출력
}