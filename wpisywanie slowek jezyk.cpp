#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ofstream out("slowka.txt");
    int a=1;
    int i=0;
    //string n,p;
    char n[100];
    char p[100];
    //cin.getline(input,sizeof(input));

    while(a!=100){
        cout << "podaj slowko jez : ";
        cin.getline(n,sizeof(n));
        cout << "podaj tlumaczenie na polski: ";
        cin.getline(p,sizeof(p));
        cout << endl << "slowo nr. " << i << endl;
        i++;
        out << setw(15) << n << "\t\t-" << "\t" << p << endl;
        if(i%5==0)
            out << endl;
    }

    return 0;
}
