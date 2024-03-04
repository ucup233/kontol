#include <iostream>
using namespace std;
int main()
{
    srand(time(0));

    int nBilA, nBilB;
    nBilA = (rand() % 11);
    nBilB = (rand() % 11);
    string status;
    if (nBilA == nBilB) {
        status = "Bilangannya sama";
    }
    else if (nBilA > nBilB) {
        status = "Bilangan A lebih besar daripada Bilangan B";
    }
    else {
        status = "Bilangan A lebih kecil daripada Bilangan B";
    }
    cout << "Bilangan A = " << nBilA << endl;
    cout << "Bilangan B = " << nBilB << endl;
    cout << "Status Bilangan = " << status << endl;
}

