// 모든 연산 문제

#include <stdio.h>
main() {
    int A, B;

    scanf("%d%d", &A, &B);

    printf("%d\n",A+B);
    printf("%d\n",A-B);
    printf("%d\n",A*B);
    printf("%d\n",A/B);
    printf("%d",A%B);
    /*
    놓쳐서 틀렸던 부분-
    printf로 ENTER 역할을( 줄내림 출력 ) 하려면 다음과 같이 작성해야 한다.
    printf("\n");
    */
}