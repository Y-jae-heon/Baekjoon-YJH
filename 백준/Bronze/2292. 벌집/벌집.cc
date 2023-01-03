#include <iostream>

int main() {
    int N; // 가야하는 방번호
    
    int end = 1; // while문의 방 번호
    int cnt = 6; // 방은 6의 배수마다 카운트
    int result = 1; // 건너가는 방 갯수
    std::cin >> N;

    while (1)
    {
        if(end >= N){
            std::cout << result << '\n';
            return 0;;
        }
        end += cnt; // end + cnt 는 result 만큼의 방 갯수를 건넘 
        cnt += 6; // 6의 배수씩 증가 1, 7, 19, 37, 61...
        result++;
    }
    
    return 0;
}