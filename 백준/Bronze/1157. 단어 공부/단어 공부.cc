#include <iostream>
#include <string.h>

int main() {
    char s[1000000];
    int a[26] = {0}; // 영문 대소문자의 합은 52
    int max = 0;
    char ans;
    std::cin >> s;
    int size = strlen(s);

    
    for (int i = 0; i < size; i++)
    {
        // std::cout << s[i] << " = string // int = " << int('a') << '\n';
        if(s[i] >= int('a')) a[int(s[i] - int('a'))]++;
        else a[int(s[i]) - int('A')]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(a[i] == max){
            ans = '?';
        }
        if(a[i] > max) {
            max = a[i];
            ans = i + 'A';
        }
    }
    
    std::cout << ans << '\n';
    
    
    return 0;
}