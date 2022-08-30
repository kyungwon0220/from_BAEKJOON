// 점이 어느 사분면에 있는지 알아내는 문제

#include <iostream>

using namespace std;

int main() {
	int x, y;
	
	cin >> x >> y;
	
	//cout << x << endl << y << endl; // debug
	
	if(x>0) {
		if(y>0) cout << 1 << endl;
		else cout << 4 << endl;
	} else {
		if(y>0) cout << 2 << endl;
		else cout << 3 << endl;
	}
}