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
    int k;
    k=1;
    l.f=2130000000.0;
    for(;l.f<(l.f+1);l.f++)
        {cout<<k<<")everlasting cycle"<<endl;
        k++;
        if(k==6)
            break;
        }

}
