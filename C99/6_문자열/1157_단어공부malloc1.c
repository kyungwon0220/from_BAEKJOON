// 주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	char *tmp = (char*)malloc(sizeof(char) * 1000000);
	char *s; // 대소문자로 이루어진 단어 
	int check[26] = {0,}; // 사용된 알파벳 카운트 
	int max_count; // 가장 많이 사용된 알파벳의 카운트 
	char max = 'A'; // 가장 많이 사용된 알파벳
	
	scanf("%s", tmp);
	
	s = (char*)malloc(sizeof(char) * strlen(tmp));
	strcpy(s, tmp);
	
	free(tmp); // 동적 할당 해제
	
	{ // 알파벳 카운트 
		for(int i=0; i<strlen(s); i++) {
			if( (s[i] >= 'A') && (s[i] <= 'Z') )
				check[s[i]-65]++;
			if( (s[i] >= 'a') && (s[i] <= 'z') )
				check[s[i]-97]++;
		}
	}
	
	free(s); // 동적 할당 해제 
	
	max_count = check[0];
	for(int i=1; i<26; i++) {
		if(max_count == check[i])
			max = '?';
				
		if(max_count < check[i]) {
			max_count = check[i];
			max = i + 65; // 아스키 코드 'A' == 65;
		}
	}
	
	printf("%c", max);
}