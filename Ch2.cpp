#include <iostream>
using namespace std;

int main(){
    const int MAX_AGE=100;
    int age=25;

    cout<<"MAX_AGE:"<< MAX_AGE<< endl;
    cout<<"Age:"<< age << endl;

    age=30;
    cout<<"Update Agel=:"<< age <<endl;
    return 0;
}