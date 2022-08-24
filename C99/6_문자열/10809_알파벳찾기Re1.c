// 한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제

#include <stdio.h>

main() {
	int i;
	char S[101];
	int F[26] ={-1,}; for(i=0; i<26; i++) F[i] = -1; // F 배열을 -1 값들로 초기화
	
	scanf("%s",S);
	//printf("%d\n",strlen(S)); // debug
	
	for(i=0; i<strlen(S); i++) {
		if(F[(int)S[i] - 'a'] == -1) // '처음' 등장하는 위치를 위한 조건 
			F[(int)S[i] - 'a'] = i;
	}
	
	for(i=0; i<26; i++) printf("%d ",F[i]); // 결과 출력	 
}