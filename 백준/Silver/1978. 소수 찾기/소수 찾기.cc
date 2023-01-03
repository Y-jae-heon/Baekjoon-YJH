#include <iostream>

int main() {
    int N; // 입력할 정수의 갯수
    int result = 0;
    std::cin >> N;

    int number[101]; // N은 100개 이하로만 숫자를 받을 수 있음으로 배열 101
    
    
    for (int i = 0; i < N; i++)
    {
        int ans = 0;
        std::cin >> number[i];
        for (int e = 1; e <= number[i]; e++)
        {
            if(number[i]%e == 0) ans++; // 입력한 숫자까지 나머지를 구했을 때
        }
        // 2로 딱 떨어져야하기 때문에 for문 바깥에 if문
        if(ans == 2) // 소수는 1과 자기자신의 숫자로만 나누어지는 수이기 때문에 ans는 2여야만 한다
            result++; // number[i]가 2에 딱 떨어졌을 시 소수임으로 카운팅
        
    }
    
    std::cout << result << '\n';

    return 0;
}