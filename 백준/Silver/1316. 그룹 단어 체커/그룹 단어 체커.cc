#include <iostream>
#include <string.h>

int main() {
    int N; // 단어의 갯수 , 100보다 작거나 같은 자연수
    std::cin >> N;
    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        char a[101];
        std::cin >> a;
        int size = strlen(a);
        bool abc[26] = {false,}; // 알파벳 bool 체크
        int count = 0;
        for (int e = 0; e < size; e++)
        {
            // 불연속적 조건 1 , abc 변수의 해당 인덱스가 false 일 때
            if((a[e-1] != a[e] && (abc[a[e] - 'a'] != true))){
                abc[a[e] - 'a'] = true;
            }else if((a[e-1] == a[e] && (abc[a[e] - 'a'] == true))){
            // 연속적이고 이미 true 일 시 무응답
            }else{
                abc[a[e] - 'a'] = false;
                count++;
            }
        }
        if(count == 0){
            sum++;
        }
    }
    
    std::cout << sum << '\n';
    return 0;
}
