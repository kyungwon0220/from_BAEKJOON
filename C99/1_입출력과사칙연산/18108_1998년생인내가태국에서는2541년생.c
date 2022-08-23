// 식을 직접 세워서 계산하는 문제

#include <stdio.h>

main() {
	int year;
	
	do {
		scanf("%d",&year);
	} while(year>3000 || year<1000);
	// 입력 조건을 ' do while ' 문을 사용하여 작성해 보았다.
	
	printf("%d",year-543);
}