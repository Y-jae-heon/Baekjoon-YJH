#include <iostream>

int a_s(int N){
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if(N < 100){
            cnt = N;
        }else{
            cnt = 99;

            for (int i = 100; i <= N; i++)
            {
                int hundred = i / 100; // 100의 자릿수
                int ten = (i / 10) % 10; // 10의 자릿수
                int one = (i % 10); // 1의 자릿수

                if((hundred - ten) == (ten - one)){
                    // 각 자릿수가 수열을 이루면
                    cnt ++;
                }
            }
            
        }
    }
    
    return cnt;
}

int main() {
    int N; // 1000 보다 작거나 같은 자연수 N
    std::cin >> N;

    int b = a_s(N); // 등차수열 갯수
    
    std::cout << b << "\n";
    return 0;

}