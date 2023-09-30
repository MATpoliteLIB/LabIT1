#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("methodMadhava.txt", ios::out);
    float abv;
    float abc;
    abv=1.0;
    abc=0.0;
    int above=1;
    for (float i=1;i<30;i=i+1){
        abv=1.0+pow(-1,i)/((1.0+2.0*i)*pow(3,i));
        cout<<"Number of iteration:"<<above<<endl;
        cout<<fixed<<setprecision(10)<<pow(12.0,1.0/2.0)*abv<<endl;
        f<<pow(12.0,1.0/2.0)*abv<<endl;
        above++;
    }

}
