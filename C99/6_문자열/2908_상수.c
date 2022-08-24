// 숫자를 뒤집어서 비교하는 문제

#include<stdio.h>
#include<math.h> // pow(지수승 함수 사용을 위해 include

Swap(char *ps); // 세자리 수를 거꾸로 바꿔주는 함수(ex_ 734 입력시 437로
int IfMax(char *ps, char *ps2);

main() {
	char A[4], B[4];
	int i, _A, _B;
	
	scanf("%s%s", &A, &B);
	Swap(A);
	Swap(B);
	//printf("%c\n",A[2]); // debug
	
	printf("%d\n",IfMax(A,B));
}
	
Swap(char *ps) {
	char tmp0 = ps[0];
	char tmp1 = ps[1];
	char tmp2 = ps[2];
	
	ps[0] = tmp2;
	ps[1] = tmp1;
	ps[2] = tmp0;
}

int IfMax(char *ps1, char *ps2) {
	int i;
	int A=0, B=0;
	
	for(i=2; i>=0; i--) { // 세자리 문자열형을 int형으로 전환하는 작업
		A += (ps1[2-i]-'0') * pow(10,i);
		B += (ps2[2-i]-'0') * pow(10,i);
	}
	
	if(A>B) return A;
	else return B;
}