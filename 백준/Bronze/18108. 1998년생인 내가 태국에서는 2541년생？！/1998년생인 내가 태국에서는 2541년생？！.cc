#include <iostream>

using namespace std;

int main() {
    int diff = 543; // 서기연도와 불기연도의 차이
    int Unex = 0; // 불기연도
    cin >> Unex; // 불기연도 입력
    cout << Unex - diff << endl; // 불기연도를 서기연도로 계산

    return 0;
}