#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int a = 21;
    float b = 3.14;
    int c = 23424;
    cout << "The value of a without setw is " << a << endl;
    cout << "The value of b without setw is " << b << endl;
    cout << "The value of c without setw is " << c << endl;

    cout << "The value of a  setw is " <<setw(4) <<a << endl;
    cout << "The value of b  setw is " <<setw(4) << b << endl;
    cout << "The value of c  setw is " <<setw(4) << c << endl;

    return 0;
}