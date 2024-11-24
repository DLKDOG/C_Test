#include <iostream>
#include <fstream>
using namespace std;

void main(int argc, char *argv[]) {
    cout << "문자열의 수 => " << argc << "\n";  // 명령행 인자의 개수 출력

    for (int i = 0; i < argc; i++) {            // 각 인자를 하나씩 출력
        cout << "argv[" << i << "]=" << argv[i] << "\n";
    }

    char ch;
    cin >> ch;  // 입력 대기 (콘솔 창 종료 방지용)
}
