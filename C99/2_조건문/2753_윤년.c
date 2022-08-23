// 윤년을 판별하는 문제

#include <stdio.h>

main() {
	int year;
	scanf("%d", &year);
	
	if(year %4 == 0 && year %100 != 0 || year % 400 == 0)
	printf("1");
	else printf("0");
}