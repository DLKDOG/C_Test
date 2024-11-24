#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file; // 파일 스트림 객체 생성
    file.open("data.txt", ios::out | ios::in | ios::trunc); // 읽기, 쓰기, 새 파일 생성

    // 파일에 데이터 쓰기
    if (file.is_open()) {
        file << "C++ File Stream Example" << endl;
        file << "File IO in action" << endl;

        // 파일 포인터를 처음으로 이동
        file.seekg(0, ios::beg);

        // 파일에서 데이터 읽기
        string line;
        while (getline(file, line)) {
            cout << line << endl; // 읽은 내용 출력
        }
    } else {
        cout << "파일을 열 수 없습니다." << endl;
    }

    file.close(); // 파일 닫기
    return 0;
}
