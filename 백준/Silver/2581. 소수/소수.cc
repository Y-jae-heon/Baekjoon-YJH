#include <iostream>

int main() {
    int M,N; // M이상 N 이하의 자연수
    int number[10001]; // 10000이하의 자연수임으로 10001

    int sum = 0;
    int min = 0;

    std::cin >> M >> N;

    for (int i = M; i <= N; i++) // M이상 M이하의 자연수 중이기 때문에 연산자 <=
    {
        number[i] = i;
        int ans = 0;
        for (int e = 1; e <= i; e++)
        {
            if(i%e == 0) ans++;
        }
        if(ans == 2) {
            sum += i;
            if(min == 0){
                min = i;
            }    
        }
    }
    if(sum == 0){
        std::cout << "-1" << '\n';
    }else{
        std::cout << sum << '\n';
        std::cout << min << '\n';
    }

    return 0;
}