// OX 퀴즈의 결과를 일차원 배열로 입력받아 점수를 계산하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {

	int score=1, sum=0, count=1, i, j;
	char _case[80];
	
	scanf("%d",&count); // 테스트 케이스 개수
	
	for(i=0; i<count; i++) {
		sum=0;
		score = 1;
		scanf("%s",_case);
		for( j=0; j<strlen(_case); j++) {
			if(_case[j] == 'O') {
				sum += score;
				score++;
		}
		if(_case[j] == 'X') score = 1;
	}
	printf("%d\n",sum);
	}
	
}