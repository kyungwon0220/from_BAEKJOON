// 원래 수로 돌아올 때까지 연산을 반복하는 문제

#include <stdio.h>

main() {
	int in_A, in_b, check_A, check_B, turn=0;
	
	do{
		scanf("%d", &in_A);
	} while((in_A<0 || in_A>99)); // ' in_A ' 입력 조건을 'do while' 문으로 작성해 보았다.
	
	if(in_A<10) in_A *= 10; // ' in_A ' 가 10보다 작을시의 입력 조건
	
	check_A = in_A; // 원래의 수를 기억

	while(1) {
		turn++; // 사이클의 길이

		in_b = (in_A/10) + (in_A % 10); // ' in_A ' 의 오른쪽 자리와 왼쪽 자리의 합
		check_B = ((in_A % 10)*10) + (in_b % 10); // 새로운 수

		if(check_A == check_B) break; // 원래의 수와 새로운 수가 일치하면 break;

		in_A = check_B;
	}

	printf("%d",turn);
}