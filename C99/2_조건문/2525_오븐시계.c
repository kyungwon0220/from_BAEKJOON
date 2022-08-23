// 범위가 더 넓은 시간 계산 문제

#include <stdio.h>

main() {
	int A, B, C;
	int tmp_h;
	
	do {
		scanf("%d%d%d",&A, &B, &C);
	} while(A>23 || A<0 || B<0 || B>59 || C<0 || C>1000); // 입력 조건을 ' do while ' 문으로 작성해 보았다.
	
	tmp_h = (B+C)/60; // 더할 '시'
	A+= tmp_h; // 최종 '시'
	B = (B+C) - tmp_h*60; // 분 = 총 '분' - 더할 '시' * 60 (분)
	if(A>23) A-=24; // 24시간제

	printf("%d %d",A, B);
}