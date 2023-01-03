#include <iostream>
#include <string.h>

int main() {
    // 1 = 2s / 2 = 3s / 3 = 4s /... 0 = 11s
    // 1      / ABC 
    char T[16];
    int N[26] = {0}; // 주어지는 문자 (알파벳 대문자 ASCII 67)
    int sum = 0; // 다이얼을 걸기 위한 최소 시간
    std::cin >> T;
    int size = strlen(T); 

    for (int i = 0; i < size; i++)
    {
        if(T[i] - 'A' >= 0){
            N[T[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {   
        if(N[i] > 0){
            if(i < 3){
                sum += 3*N[i];
            }else if(i < 6){
                sum += 4*N[i];
            }else if(i < 9){
                sum += 5*N[i];
            }else if(i < 12){
                sum += 6*N[i];
            }else if(i < 15){
                sum += 7*N[i];
            }else if(i < 19){
                sum += 8*N[i];
            }else if(i < 22){
                sum += 9*N[i];
            }else{
                sum += 10*N[i]; //UNUCIC
            }
        }
    }
    
    std::cout << sum << '\n';

    return 0;
}