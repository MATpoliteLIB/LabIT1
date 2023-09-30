#include <iostream>
using namespace std;
union un {
    int i;
    float f;
};

void binary(unsigned int n)
{
for (int i=1; i<=32; i++) {
     if ((n<<1)>>1==n)
{
    cout<<0;
}
else
{
    cout<<1;
}
 n=n<<1; }
}
int main()
{
    cout << fixed;
    cout.precision(2);
    un t,l;
    l.f=1.0;
    int n=1;
    for(int i=0;i<50;i++){
        l.f=l.f*10;
        cout<<(l.f);
        cout<<endl;
        binary(l.f);
        cout<<endl;
        cout<<endl;
    }
}
