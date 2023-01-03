#include <iostream>

int main() {
    int n; // 소인수분해할 정수

    std::cin >> n;

    int cnt = 2; // 최초 인수

    if(n != 1){
        while (n>1)
        {
            if(n % cnt == 0){ // 나눠지면 인수 출력
                std::cout << cnt << '\n';
                n /= cnt;
            }else{ // 안나눠지면 인수를 증가해서 출력
                cnt++;
            }
        }   
    }

    return 0;
}