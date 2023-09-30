#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("methodViette.txt", ios::out);
    float abv;
    float abc;
    abv=pow(2,1.0/2);
    abc=0.0;
    float itog;
    itog=2.0/pow(2,1.0/2);
    float mi;
    mi=-1.0;
    float c;
    c=0.0;
    int above=1;
    for (float i=1;i<12;i=i+1){
        abc=pow(2+abv,1.0/2);
        abv=abc;
        itog=itog*(2/abv);
        cout<<"Number of iteration:"<<above<<endl;
        cout<<fixed<<setprecision(10)<<itog*2<<endl;
        f<<itog*2<<endl;
        mi=-1.0;
        c=c+1.0;
        above++;
    }

}
