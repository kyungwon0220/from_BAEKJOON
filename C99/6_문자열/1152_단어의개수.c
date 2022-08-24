// 단어의 개수를 구하는 문제

#include <stdio.h>

main() {
	char S[1000005];
	int count = 0;
	int Ssize, i;
	
	scanf("%[^\n]",S); // %[^\n] == ' \n(엔터) ' 가 나오기까지 문자열로 받는다(공백 포함 
	Ssize = strlen(S);
	//printf("%d\n",Ssize); // debug
	
	if(S[0] != ' ') count++;
	
	for(i=1; i<Ssize; i++)
		if(S[i-1] == ' ' && S[i] != ' ') count++;
	
 	// 결과(단어의 개수 출력
	printf("%d\n",count);
}