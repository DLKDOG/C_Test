#include <iostream>
using namespace std;
int main()
{
    int i=0;
    while(true){
        cout<<"\t"<<++i;
        if(i%10==0) goto exit_while;
    }
exit_while:
    cout<<"\n >> -----The End ---- <<\n";
    char ch; cin>>ch;
}