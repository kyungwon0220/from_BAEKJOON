#include <stdio.h>

main() {
	int R, _T=1, i, j;
	char S[21], P[161];
	
	scanf("%d",&_T); // 총 테스트 케이스의 개수
	
	while( _T != 0) {
		
		scanf("%d%s",&R, &S); // 각 테스트 케이스의 반복 횟수와 문자열
		//printf("%d\n",_T); //debug
		
		for(i=1; i<=strlen(S); i++) {
			for(j=(R*i)-1; j>=(i-1)*R; j--) {
				P[j] = S[i-1];
			}
		}
		
		for(i=0; i<R*strlen(S); i++)
			printf("%c",P[i]);
		printf("\n");
		_T--;
	}
}