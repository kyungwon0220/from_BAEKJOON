// 시험 점수를 성적으로 바꾸는 문제

#include <iostream>

using namespace std;

int main() {
	int sor;
	
	do{
		cin >> sor;
	} while(sor<0 || sor>100); // 입력 조건
	
	//cout << sor << endl; // debug
	
	if(sor<=100 && sor>=90) cout << "A" << endl;
	else if(sor<=89 && sor>=80) cout << "B" << endl;
	else if(sor<=79 && sor>=70) cout << "C" << endl;
	else if(sor<=69 && sor>=60) cout << "D" << endl;
	else cout << "F" << endl;
}