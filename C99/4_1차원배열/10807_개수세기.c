// 배열을 입력받고 v를 찾는 문제

#include <stdio.h>

main() {
	unsigned short N;
	unsigned short v;
	unsigned short vv[100];
	unsigned short check = 0;

	scanf("%hd", &N); // 정수의 개수

	for (unsigned short i = 0; i < N; i++) scanf("%hd", &vv[i]);

	scanf("%hd", &v); // 찾으려고 하는 정수

	for(unsigned short i = 0; i< N; i++)
		if (vv[i] == v) check++;

	printf("%hd", check);
}