// 조건에 따라 상금을 계산하는 문제

#include <iostream>

using namespace std;

int main() {
	int *A = new int[3];
	int tmp, max=0;
	
	for(int i=0; i<3; i++) {
		cin >> A[i];
		if(max<A[i]) max = A[i];
	}
	
	if( (A[0]==A[1]) && (A[1]==A[2]) ) tmp = 10000 + (A[0]*1000);
	else if ( A[0]==A[1] || A[0]==A[2] ) tmp = 1000+(A[0]*100);
	else if ( A[1]==A[2] ) tmp = 1000 + (A[1]*100);
	else tmp = max*100;
	 
	delete[] A;
	
	cout << tmp;
}