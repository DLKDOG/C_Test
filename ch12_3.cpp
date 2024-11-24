#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt"); // 파일 열기

    if (!file.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    string data;
    while (file.good()) { // 파일 상태가 정상인 동안 반복
        file >> data; // 데이터를 읽음
        if (file.eof()) { // 파일의 끝에 도달했는지 확인
            cout << "파일의 끝에 도달했습니다." << endl;
            break;
        }
        if (file.fail()) { // 읽기 실패 여부 확인
            cout << "파일 읽기 실패!" << endl;
            break;
        }
        cout << data << endl; // 읽은 데이터 출력
    }

    file.close(); // 파일 닫기
    return 0;
}
