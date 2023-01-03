#include <iostream>

int getNum(int a, int b) {
    if(a == 0){
        return b;
    }
    if(b == 1){
        return 1;
    }
    return (getNum(a-1, b) + getNum(a, b-1));
};

int main() {
    int T; // 테스트케이스의 갯수
    std::cin >> T;

    // a층의 b호는 (a-1)층의 1호부터 b호까지의 사람들의 수 합만큼 사람을 데리고 있어야함
    for (int i = 0; i < T; i++)
    {
        int a,b;
        std::cin >> a >> b;
        // a층의 b호는 
        // (a-1)층의 b호 사람 + a층의 (b-1)호 사람 
        std::cout << getNum(a,b) << '\n';
    }

    return 0;
}