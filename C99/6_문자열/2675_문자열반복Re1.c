// 각 문자를 반복하여 출력하는 문제

#include <stdio.h>

main() {
	int R, _T=1, i, j;
	char S[21], P[161];
	
	scanf("%d",&_T);
	
	while( _T != 0) {
		
		scanf("%d%s",&R, &S);
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