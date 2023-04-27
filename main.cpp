#include <iostream>
using namespace std;
int main() {
int n,F,a=1,b=1;
cin>>n;
if(n<2){
cout<<"errore!\n";
}
else {
    int c = 0;
    cout << a << endl;
    cout << b << endl;
    while (c < (n - 2)) {
        c++;
        F = a + b;
        cout << F << endl;
        a = b;
        b = F;
    }
}
return 0;
}
