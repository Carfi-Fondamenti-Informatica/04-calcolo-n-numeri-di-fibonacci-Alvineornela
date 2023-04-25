#include <iostream>
using namespace std;

int main() {
  int n_sf= 1;
    int add = 0;
    int n_psf;
    int n1 = 0;
    int n;
    cin>> n;
    if(n>=2) {
        while (n1 < n) {
            cout << n_sf << endl;
            n_psf = n_sf;
            n_sf = n_sf + add;
            add = n_psf;
            n1++;
        }
      } 
    else{
        cout<<"Errore!"<<endl;
    } 
   
   return 0;
}
