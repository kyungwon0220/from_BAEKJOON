// 빈 칸에 들어갈 수는?

#include <stdio.h>
main() {
    int A, B;
    int a3, a4, a5, a6;
    scanf("%d%d", &A, &B);
    a3 = (A*(B%10));
    a4 = (A*((B%100)/10));
    a5 = (A*(B/100));
    a6 = A*B;
    printf("%d\n%d\n%d\n%d", a3, a4, a5, a6);
}