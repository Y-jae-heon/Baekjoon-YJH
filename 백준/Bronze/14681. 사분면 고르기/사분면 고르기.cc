#include <iostream>

using namespace std;

int main() {
    int x,y; // x 좌표 및 y 좌표
    cin >> x >> y;

    // x y 모두 양수 일 시 1
    // x 가 음수 y 가 양수일 시 2
    // x y 모두 음수 일 시 3 
    // x 가 양수 y 가 음수일 시 4
    if(x > 0){
        if(y > 0){
            cout << 1 << endl;
        }else{
            cout << 4 << endl;
        }
    }else if(x < 0){
        if(y > 0){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }

    return 0;
}