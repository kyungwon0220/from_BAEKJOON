// 빈 칸에 들어갈 수는?

#include <iostream>

using namespace std;

int main() {
	int A, B;
	int *c = new int[4];

	cin >> A >> B;
	
	c[4] = A*B; // 최종 결과 미리 저장

	//각 자릿수 숫자 분리
	for (int i = 0; i < 3; i++) {
		c[i] = B % 10;
		B /= 10;

		//cout << c[i] << endl; // debug
		cout << A * c[i] << endl;
	}

	cout << c[4];

	delete[] c; // 메모리 할당 해제
}