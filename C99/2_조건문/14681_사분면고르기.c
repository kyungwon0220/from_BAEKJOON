// 점이 어느 사분면에 있는지 알아내는 문제

#include <stdio.h>

main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if(a>0) {
		if(b>0) printf("1");
		else printf("4");
	} else {
		if(b>0) printf("2");
		else printf("3");
	}
}