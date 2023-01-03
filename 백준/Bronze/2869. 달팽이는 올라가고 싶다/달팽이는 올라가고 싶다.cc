#include <iostream>
#include <cmath>

int main() {
    int V,A,B; // 나무 막대의 길이 / m

    // B는 A를 넘을 수 없고 A는 V를 넘을 수 없으며 1 과 같거나 1000000000과 같거나 작다
    // 며칠이 걸리는지
    std::cin >> A >> B >> V; // 낮 / 밤 / 길이

    std::cout << int((V - B - 1) / (A - B)) + 1 << '\n';

    return 0;
}