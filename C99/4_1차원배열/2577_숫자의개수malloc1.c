// 각 숫자가 몇 번 나왔는지 저장하기 위해 일차원 배열을 만드는 문제

#include <stdio.h>
#include <stdlib.h>

main() {
    int* num; // 세 개의 자연수
    long long range = 1; // 세 개의 자연수의 곱
    int check_num = 1;
    int* dap;
    int tmp;

    num = (int*)malloc(sizeof(int) * 3); // ' int 크기 * 3 ' 크기 만큼 메모리 동적 할당
    dap = (int*)malloc(sizeof(int) * 10); // ' int 크기 * 10 ' 크기 만큼 메모리 동적 할당
    
    for (int i = 0; i < 10; i++) dap[i] = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
        range *= *(num + i);
    }
    //printf("%d\n", range); // debug

    free(num); // 동적 할당 해제

    // 자리수 계산
    tmp = range;
    while (tmp >= 10) {
        check_num++;
        tmp /= 10;
    }
    //printf("check = %d\n", check_num); // debug
    //for (int i = 0; i < 10; i++) printf("%d\n", *(dap + i)); // debug

    for (int i = 0; i < check_num; i++) {
        dap[range % 10]++;
        range /= 10;
    }

    for(int i=0; i<10; i++) printf("%d\n", *(dap + i));
    
    free(dap); // 동적 할당 해제
}