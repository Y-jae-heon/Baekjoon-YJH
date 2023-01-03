#include <iostream>
#include <string>

int main() {
    std::string S; // 입력받을 단어
    std::cin >> S;
    int abc[26];
    // a의 아스키코드 97

    for (int i = 0; i < 26; i++)
    {
        abc[i] = -1;
    }

    for (int i = 0; i < S.length(); i++)
    {
        if(abc[(int)S[i]-97] < 0) abc[(int)S[i] - 97] = i;
    }
    

    for (int i = 0; i < 26; i++)
    {
        std::cout << abc[i] << " "; 
    }
    

    return 0;
}