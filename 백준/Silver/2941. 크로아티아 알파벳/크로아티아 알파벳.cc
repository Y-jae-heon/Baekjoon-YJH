#include <iostream>
#include <string.h>

int main() {
    char N[101]; // 처음 받을 알파벳 소문자 & - 와 =
    // 0 보다 아래는 - 와 =
    // 알파벳의 숫자 세기 
    // lj 와 nj, dz= 는 하나의 알파벳으로
    // c= , c- , d-, s=, z=
    // 108,106 / 110,106 / 100,122
    // 99, 99, 100,  115, 122
    std::cin >> N;

    int size = strlen(N); // 받은 글자 크기
    int sum = 0; // 받은 글자의 알파벳 갯수

    for (int i = 0; i < size; i++)
    {
        if(N[i] - 'a' >= 0){
            if((N[i] == 'c' && N[i+1] == '=') || (N[i] == 'c' && N[i+1] == '-')){
                sum++;
                i++;
            }else if(N[i] == 'd' && N[i+1] == '-'){
                sum++;
                i++;
            }else if(N[i] == 'l' && N[i+1] == 'j'){
                sum++;
                i++;
            }else if(N[i] == 'n' && N[i+1] == 'j'){
                sum++;
                i++;
            }else if(N[i] == 's' && N[i+1] == '='){
                sum++;
                i++;
            }else if(N[i] == 'd' && N[i+1] == 'z' && N[i+2] == '='){
                sum++;
                i = i + 2;
            }else{
                sum++;
            }
        }
    }
    
    std::cout << sum << '\n';

    return 0;
}