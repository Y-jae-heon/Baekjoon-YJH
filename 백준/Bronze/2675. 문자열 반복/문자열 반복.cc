#include <iostream>
#include <string>

int main() {
    int T; // 테스트케이스 갯수
    std::cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int R; // 반복 횟수
        std::string S; // 받은 문자열
        std::string D;
        std::cin >> R >> S;
        for (int i = 1; i <= S.length(); i++)
        {
            for (int e = 1; e <= R; e++)
            {
                if(i*R >= e) D += S[i-1];
            }
        }

        std::cout << D << '\n';
        
    }
    
    return 0;
    
}