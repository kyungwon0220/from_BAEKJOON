// 두 수를 비교한 결과를 출력하는 문제

#include <iostream>

using namespace std;

int main() {
	int A, B;
	
	cin >> A >> B;
	
	if(A>B) cout << ">" << endl;
	else if(A<B) cout << "<" << endl;
	else cout << "==" << endl;
}