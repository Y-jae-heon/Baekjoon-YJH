#include <iostream>

int main() {
    int X; // X번째 분수
    std::cin >> X;
    int i = 1;

    while (X > i)
    {
        X -= i;
        i++;
    }

    if(i % 2 == 1){
        std::cout << i + 1 - X << '/' << X << '\n';
    }else{
        std::cout << X << '/' << i + 1 - X << '\n';
    }

    return 0;
}