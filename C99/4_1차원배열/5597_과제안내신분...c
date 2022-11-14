// 과제 제출 기한이 지났습니다.

#include <stdio.h>
#include <stdlib.h>

main() {
	unsigned short check;
	unsigned short* p = (unsigned short*)malloc(sizeof(unsigned short) * 30); // ' unsigned short 크기 * 30 ' 크기 만큼 메모리 동적 할당

	for (unsigned short i = 0; i < 28; i++) {
		scanf("%hd", &check);
		p[check - 1] = 1;
	}

	for (unsigned short i = 0; i < 30; i++)
		if (p[i] != 1) printf("%hd\n", i + 1);

	free(p); // 동적 할당 해제
}