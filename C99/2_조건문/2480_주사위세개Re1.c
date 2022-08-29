// 조건에 따라 상금을 계산하는 문제

#include <stdio.h>

main() {
	int dice[3];
	int i, max = 0;
	
	for(i=0 ;i<3; i++) {
		scanf("%d",&dice[i]);
		
		if(max < dice[i]) max = dice[i];
	}
	
	if(dice[0] == dice[1] && dice[1] == dice[2])
		printf("%d\n", dice[0] * 1000 + 10000); // 같은 눈이 3개가 나온 경우
	else if(dice[0] == dice[1] || dice[0] == dice[2])
		printf("%d\n", dice[0] * 100 + 1000);
	else if(dice[1] == dice[2])
		printf("%d\n", dice[1] * 100 + 1000);
	else printf("%d\n", max * 100);	 
}