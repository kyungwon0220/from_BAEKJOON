// 최댓값이 어디에 있는지 찾는 문제

#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
	int max = 0; // 입력 조건이 자연수이기에
	int tmp;
	
	p = (int*)malloc(sizeof(int) * 9); // ' int 크기 * 9 ' 크기 만큼 메모리 동적 할당
	
	for(int i=0; i<9; i++) {
		scanf("%d", &p[i]);
		
		if(p[i] > max) { // 최댓값 체킹
			max = p[i];
			tmp = i+1;
		}
	}
	
    free(p); // 동적 할당 해제
    
	printf("%d\n%d", max, tmp);
}