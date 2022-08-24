// 한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
	int i, j; 
	int F[27] = {-1,}; for(i=0; i<27; i++) F[i] = -1; // '-1' 값들을 가진 배열 F 선언
	char S[101];
	
	scanf("%s",&S); // 단어 S
	
	for(i=0; i<26; i++) {
		for(j=0; j<strlen(S); j++) {
			if(i == (int)S[j] - 'a') {
				F[i] = j;
				break;
			}
		}
	}
	
	for(i=0; i<26; i++)
		printf("%d ",F[i]);
}