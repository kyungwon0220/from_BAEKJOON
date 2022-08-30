// 조건에 따라 상금을 계산하는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
    int* Dice;
    int max_num = 0;
    
    Dice = (int*)malloc(sizeof(int) * 3); // ' int 크기 * 3 ' 크기 만큼 메모리 동적 할당

    for (int i = 0; i < 3; i++) {
        scanf("%d", &Dice[i]);
        //printf("%d\n", Dice[i]); //debug

        if (max_num < Dice[i]) max_num = Dice[i]; // 가장 큰 눈
    }

    if ( Dice[0] == Dice[1] && *(Dice+1) == *(Dice+2) )
        printf("%d\n", 10000 + (1000 * *Dice));
    else if( *Dice == *(Dice+1) || Dice[0] == Dice[2])
        printf("%d\n", 1000 + (100 * Dice[0]));
    else if( Dice[1] == Dice[2] )
        printf("%d\n", 1000 + (100 * Dice[1]));
    else
        printf("%d\n", max_num * 100);

    free(Dice); // 동적 할당 해제
}