#include <iostream>

using namespace std;

int main() {
    int H,M;
    cin >> H >> M;
    // 60 - 45 + M
    if(H != 0){
        if(M < 45){
            cout << H - 1 << " " << 60 - 45 + M << endl; 
        }else{
            cout << H << " " << M - 45 << endl;
        }
    }else{
        if(M < 45){
            cout << H + 23 << " " << 60 - 45 + M << endl; 
        }else{
            cout << H << " " << M - 45 << endl;
        }
    }

    return 0;
}