#include <iostream>
using namespace std;

int main() {
 int n_F= 1;
    int add = 0;
    int n_precedenteF;
    int n1 = 0;
    int n;
    cin>> n;
    if(n>=2) {
        while (n1 < n) {
            cout << n_F << endl;
            n_precedenteF = n_F;
            n_F = n_F + add;
            add = n_precedenteF;
            n1++;
        }
    }
    else{
        cout<<"Errore!"<<endl;
    } 
   return 0;
}
