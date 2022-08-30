// 나눗셈 문제. 이 문제에는 "스페셜 저지" 표시가 붙어 있는데, 이것은 예제 출력과 꼭 똑같이 출력할 필요는 없고 조건에 맞는 답을 출력하면 된다는 뜻입니다.

#include <iostream>

using namespace std;
int main() {
    double A1, B1;

	cin >> A1 >> B1;
    
	cout.precision(10); // 소수점 ' 10 ' 자리 전까지 출력하겠다는 뜻
	cout << A1 / B1;
}