// 윤년을 판별하는 문제

#include <iostream>

using namespace std;

int main() {
	int y;
	
	cin >> y;
	
	//cout << y << endl; // debug
	
	if((y%4==0 && y%100!=0) || y%400==0) cout << 1 << endl;
	else cout << 0 << endl;
}