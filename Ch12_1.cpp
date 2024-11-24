#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("example.txt"); // 파일 열기

    if (fout.is_open()) {
        // 파일 열기가 성공했을 경우 실행
        fout << "Hello, World!" << endl;
        cout << "파일이 성공적으로 열렸습니다." << endl;
    } else {
        // 파일 열기가 실패했을 경우 실행
        cout << "파일을 열 수 없습니다." << endl;
    }

    fout.close(); // 파일 닫기
    return 0;
}
