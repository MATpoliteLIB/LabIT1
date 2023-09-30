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
    un t;
    cin >> t.f;
    binary(t.i);
    cout << endl;
}
