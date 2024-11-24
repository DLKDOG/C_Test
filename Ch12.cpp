#include <iostream>
#include <fstream>
using namespace std;

struct insa {
    char name[20];
    int age;
    char address[20];
};

int main() {
    insa man;
    ifstream fin; // 파일 읽기 객체 생성
    fin.open("insa.dat"); // insa.dat 파일 열기
    fin >> man.name >> man.age >> man.address; // 파일 내용 읽어서 구조체에 저장
    cout << man.name << " " << man.age << " " << man.address << endl; // 데이터 출력
    fin.close(); // 파일 닫기
    return 0;
}
