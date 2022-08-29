#include <stdio.h>

main() {
	int arr[10], i, j;
	int count = 1; // 서로 다른 값의 개수
	
	for(i=0 ;i<10; i++) {
		scanf("%d",&arr[i]);
		arr[i] %= 42;
		// printf("%d, ", arr[i]); // debug
	}
	
	for(i=0 ;i<9; i++) {
		for(j=i+1; j<10; j++)
			if(arr[i] == arr[j]) break; // 서로 같은 수일 경우
			
		if( j == 10 ) count++; // 서로 같은 수가 없는 경우 
	} // https://www.acmicpc.net/board/view/90102
	
	// 결과 출력
	printf("%d\n",count);
}