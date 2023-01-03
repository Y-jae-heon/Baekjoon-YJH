#include <iostream>
#include <string.h>

int rev(int T) {
    int r = 0; // 뒤집은 결과
    while (T != 0) // T가 0이 되면 모든 자릿수의 계산이 반복된 것
    {
        r *= 10; // 아래의 공식이 적용된 후의 r을 10 곱한다
        r += T % 10; // 원본 T 의 1의 자리를 구한 후 r에 더함
        T /= 10; // 원본 T를 나누기 10
    }
    
    return r;
    
};

int main() {
    int T1,T2; // 비교할 수 1 2;

    std::cin >> T1;
    std::cin >> T2;

    int S1 = rev(T1); // 뒤집은 결과 1
    int S2 = rev(T2); // 뒤집은 결과 2

    if(S1 > S2){
        std::cout << S1 << '\n';
    }else{
        std::cout << S2 << '\n';
    }

    return 0;
}