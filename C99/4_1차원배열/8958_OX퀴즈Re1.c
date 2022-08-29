// OX 퀴즈의 결과를 일차원 배열로 입력받아 점수를 계산하는 문제

#include <stdio.h>

main() {
	int N, i;
	char Test[81];
	int sum, score, size;
	
	scanf("%d",&N); // 테스트 케이스 개수
	 
	while(N) {
		sum=0;
		score=0;
		
		scanf("%s",Test); // OX퀴즈의 결과
		size = strlen(Test);
		//printf("%d\n",size); // debug
		
		for(i=0; i<size; i++) {
			if(Test[i] == 'O') {
				score++;
				sum+= score;
			} else if(Test[i] == 'X') score=0;
		}
		
		// 각 케이스마다 결과 출력 
		printf("%d\n",sum);

		N--;
	}
}