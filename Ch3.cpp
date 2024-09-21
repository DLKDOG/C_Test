#include <iostream>
using namespace std;
int main()
{
int x;
cout << " 정수값을 입력하세요 -> ";
cin >> x;
if(x < 0) x = -x; // 부호 변경
cout << " 절댓값 => " << x << "\n";
char ch; cin>>ch;
return 0;
}