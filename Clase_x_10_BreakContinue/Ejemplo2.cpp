#include <iostream>
#include <vector>
#include <cctype> 
using namespace std;


int main(){
    vector<string> nombres = {"David","Andres","Juan","carlos","susana","ailed"};
    string inicial;
    for (int i=0; i < nombres.size(); i++){
        inicial = nombres[i][0];
        for (char &c : inicial){
            c = toupper(c);
        }

        if (inicial== "A"){
            continue;
            // Lo que siga no se tiene en cuenta
            // cout << "Inicial A (no se tiene en cuenta)"<< endl;
        }else{
            cout << inicial<< endl;    
        }
    }
}