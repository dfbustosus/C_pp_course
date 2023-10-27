#include <iostream>
using namespace std;

int main(){
    int edad;
    cout << "Dame tu edad en años: ";
    cin >> edad;
    if (edad-5 <=0){
        cout << "Hace 5 años no habias nacido";
    } else {
        edad -=5;
        cout << "Tu edad hace 5 años fue: " << edad << endl;
    }
}