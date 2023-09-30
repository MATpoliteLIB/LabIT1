#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("0methodValiss.txt", ios::out);
    float abv;
    float abc;
    abv=1.0;
    abc=0.0;
    int above=1;
    for (float i=1;i<2200;i=i+1){
        abc=(4.0*i*i)/(4.0*i*i-1);
        abv=abv*abc;
        cout<<"Number of iteration:"<<above<<endl;
        cout<<fixed<<setprecision(10)<<abv*2<<endl;
        f<<abv<<",";
        above++;
    }
}
