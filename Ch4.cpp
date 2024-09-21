#include <iostream>
using namespace std;

int main()
{
    int total;
    int a = 10;
    int i;

    total = 0;
    for(i = 1; i <= a; i++){
        total += i;
    }
    cout << "total=" << total << endl; // std:: 제거

    total = 0;
    for(i = 1; i <= 100; i++){
        total += i;
    }
    cout << "total=" << total << endl; // std:: 제거

    total = 0;
    for(i = 1; i <= 5; i++){
        total += 1;
    }
    cout << "total=" << total << endl; // std:: 제거
}
