#include <iostream>

int main() {
    int A,B,C; // 고정비 가변비 판매비용
    std::cin >> A >> B >> C;

    int one = A+B; // 1대 생산 비용
    int sum = C;

    if(B >= C){
        std::cout << "-1" << '\n';
    }else{
        sum = A / (C - B) + 1;
        std::cout << sum << '\n';
    }

    return 0;
}