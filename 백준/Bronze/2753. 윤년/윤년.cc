#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;
    if(a%4 == 0 && a%100 != 0){
        cout << 1 << endl;
        return 0;
    }else if(a%400 == 0){
        cout << 1 << endl;
        return 0;
    }else{
        cout << 0 << endl;
        return 0;
    }
}