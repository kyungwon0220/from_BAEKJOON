// 네 개의 계산식을 계산하는 문제. 이 문제를 푼 다음에는 직접 입력을 만들어서 넣어 봅시다. 어떤 사실을 관찰할 수 있나요?

#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    
    cin >> A >> B >> C;
    
    cout << (A+B)%C << endl << ((A%C) + (B%C))%C << endl << ((A*B)%C) << endl << ((A%C) * (B%C))%C;
}