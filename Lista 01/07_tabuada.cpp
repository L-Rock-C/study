#include <iostream>

using namespace std;

int main (){

    int n;

    cout << "Insira um numero que deseja receber a tabuada: ";
    cin >> n;

    for(int i = 0; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }

    system("pause");

}
