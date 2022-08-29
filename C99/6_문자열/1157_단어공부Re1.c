// 주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제

#include<stdio.h>
main() {
	char S[1000001], dap;
	int i, _check=0, max_tmp=0;
	int tmp[26] = {0,}; for(i=0; i<26; i++) tmp[i] = 0; // tmp 배열을 0 값들로 초기화
	int _Ssize;
	
	scanf("%s",S); // 대소문자로 이루어진 단어
	_Ssize = strlen(S);
	//printf("%d\n",_Ssize); // debug
    
	for(i=0; i<_Ssize; i++) {
		if(S[i]>= 'A' && S[i] <='Z')
			tmp[S[i]-'A']++;
		if(S[i]>= 'a' && S[i] <='z')
			tmp[S[i]-'a']++;
	}
	
	// 결과
	max_tmp = tmp[0];
	dap = 'A';
	
	for(i=1; i<26; i++) {
		if(max_tmp == tmp[i] && tmp[i] != 0) {
            dap='?'; // '?' 출력 조건
            /* break; */ // 모든 알파벳 개수를 확인하기 전에 반복문이 종료되기 때문에, 더 큰 개수를 가진 알파벳이 있는지 확인 불가
        } // https://www.acmicpc.net/board/view/89320
		if(max_tmp < tmp[i]) {
			max_tmp = tmp[i];
			dap = i + 65; // 아스키 코드 'A' == 65;
		}
	}
	printf("%c",dap);
}