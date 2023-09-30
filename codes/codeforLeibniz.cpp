#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("methodLeibniz.csv", ios::out);
    float abv;
    float abc;
    abv=0.0;
    abc=0.0;
    float mi;
    mi=-1.0;
    float c;
    c=0.0;
    int above=1;
    for (float i=0;i<100000;i=i+2){
        for(float k=0;k<=c;k=k+1.0){
            mi=mi*(-1.0);
        }
        abc=4/(i+1)*mi;
        abv=abv+abc;
        cout<<"Number of iteration:"<<above<<endl;
        cout<<fixed<<setprecision(10)<<abv<<endl;
        f<<abv<<endl;
        mi=-1.0;
        c=c+1.0;
        above++;
    }
}
