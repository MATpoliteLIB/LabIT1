#include <iostream>
using namespace std;
int main()
{
    unsigned int s;
    int a[100];
    int i;
    i=0;
    cin>>s;
    for(int i=0;i<32;i++)
    {
        if (s==((s<<1)>>1))
            cout<<"0";
        else
            cout<<"1";
        s=s<<1;
    }
}
