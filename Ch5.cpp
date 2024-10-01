#include<iostream>
using namespace std;
int absolute(int a);
int main()
{
int a=-10;
    cout<<"main에서 함수 호출 전 a값="<<a<<"\n";
    a=absolute(a);
    cout<<"main에서 함수 호출 후 a값="<<a<<"\n";
    char ch;
    cin>>ch;
    return 0;
}

int absolute(int a)
{
    if(a<0) a=-a;    
    cout<<"absolute 함수에서의 a값="<<a<<"\n";
    return a;
}