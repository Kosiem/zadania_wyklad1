
#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    
    if (x > 0){
        cout << x << " jest wieksze od 0";
    } else if (x < 0){
        cout << x << " jest mniejsze od 0";
    } else{
        cout << x << " jest rowne 0";
    }
   return 0;

}
