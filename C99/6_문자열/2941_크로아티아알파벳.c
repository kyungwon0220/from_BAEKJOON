// 크로아티아 알파벳의 개수를 세는 문제

#include <stdio.h>

main() {
	char S[101];
	int size, i, dap;
	
	scanf("%s",S);
	size = strlen(S);
	dap = size; // 총 글자 수에서 -- 방식으로 풀 예정 
	
	for(i=0; i<size; i++) {
		if(S[i] == '=') {
			if(S[i-1] == 'c' ||  S[i-1] == 's' || S[i-1] == 'z') {
				dap--;
				if(S[i-1] == 'z' && S[i-2] == 'd') dap--;
			}
		}
		
		else if(S[i] == '-') {
			if(S[i-1] == 'c' || S[i-1] == 'd') dap--;
		}
		
		else if(S[i] == 'j') {
			if(S[i-1] == 'l' || S[i-1] == 'n') dap--;
		}
	}
	
	printf("%d\n",dap);
}