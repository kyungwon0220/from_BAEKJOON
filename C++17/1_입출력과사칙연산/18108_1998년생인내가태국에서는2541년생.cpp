// 식을 직접 세워서 계산하는 문제

#include <iostream>

using namespace std;

int main() {
    int y;
    do{
        cin >> y;
    } while(y<1000 || y>3000);
    
    cout << y-543;
}