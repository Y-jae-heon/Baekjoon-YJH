#include <iostream>
using namespace std;


int main() {
    int tc[81];
    int max = 0;
    int col = 0;
    int row = 1;
    int col2;
    int row2;
    
    for (int i = 0; i < 81; i++)
    {
        cin >> tc[i];
        if(col%9 == 0 && i != 0){
            col = 1;
            row++;
        }else{
            col++;
        }

        if(max <= tc[i]){
            max = tc[i];
            col2 = col;
            row2 = row;
        }
    }
    cout << max << "\n" << row2 << " " << col2 << '\n';
    return 0;
}