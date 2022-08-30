// 범위가 더 넓은 시간 계산 문제

#include <iostream>

using namespace std;

int main() {
	int A, B, C;
	int tmp_h;
	
	cin >> A >> B >> C;
	
	tmp_h = (B+C)/60;
	
	A += tmp_h;
	
	B = (B+C) - (tmp_h * 60);
	
	if(A>23) A-=24;
	
	cout << A << " " << B << endl;
	
}