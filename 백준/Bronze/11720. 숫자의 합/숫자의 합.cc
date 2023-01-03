#include <iostream>

int main() {
    int n, sum = 0; // n은 숫자의 갯수
    std::cin >> n; 
    char arr[n];
    std::cin >> arr;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (arr[i] - (char)'0');
    }

    std::cout << sum << "\n";
    
    return 0;
}