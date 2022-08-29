// 단어의 개수를 구하는 문제

#include <stdio.h>

main() {
	char S[1000001];
	int count = 0;
	int Ssize, i;
	
	scanf("%[^\n]",S);
	Ssize = strlen(S);
	//printf("%d\n",Ssize); // debug
	
	if(S[0] != ' ') count++;
	
	for(i=1; i<Ssize; i++)
		if(S[i-1] == ' ' && S[i] != ' ') count++;
	
	printf("%d\n",count); // debug
}