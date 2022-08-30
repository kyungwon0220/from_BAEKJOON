// 시간 계산 문제

#include <iostream>

using namespace std;

int main() {
	int H, M;
	
	cin >> H >> M;
	
	if(M-45 < 0) {
		H--;
		M += 60-45;		
	} else M -= 45;
	
	if(H<0) H+=24; // 24시간제 
	
	cout << H << " " << M << endl;
}