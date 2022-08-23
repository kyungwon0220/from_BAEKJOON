// 조건에 따라 상금을 계산하는 문제

#include <stdio.h>

main() {
	int turn, max = 0;
	int Dice[3] = {0, 0, 0};	
	
	// 3개의 주사위를 던지면서, 가장 큰 눈을 가진 주사위의 값을 체킹
	for(turn=0; turn<3; turn++) {
		scanf("%d",&Dice[turn]);
		if(max < Dice[turn]) max = Dice[turn];
	}
	
	//printf("%d\n",Dice[turn]); // debug
	turn = 2;
	if(Dice[turn] == Dice[turn-1] && Dice[turn] == Dice[turn-2]) // 같은 눈이 3개가 나온 경우
		printf("%d",10000 + max * 1000);
	else if(Dice[turn] == Dice[turn-2] || Dice[turn] == Dice[turn-1]) // 가 아닌데, 3번째 주사위와 같은 눈이 2개만 나온 경우
		printf("%d",1000 + Dice[turn] * 100);
	else if (Dice[turn-2] == Dice[turn-1]) // 도 아닌데, 같은 눈이 2개만 나온 경우
		printf("%d",1000 + Dice[turn-2] * 100);
	else // 모두 다른 눈이 나온 경우
		printf("%d", max * 100); // 체크했던 가장 큰 눈(변수 max) * 100원
}