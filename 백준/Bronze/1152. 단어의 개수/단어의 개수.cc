#include <iostream>
#include <string.h>

int main() {
    char s[1000005];

    std::cin.getline(s, 1000005);

    int size = strlen(s);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(i == 0){
            if(s[i] != ' '){
                count++;
            }
        }
        if(s[i] == ' '){
            if(s[i+1] != ' ' && s[i+1] != 0){
                count++;
            }
        }
    }

    std::cout << count << '\n';

    return 0;
    
}