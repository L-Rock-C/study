#include <iostream>

using namespace std;

int main (){

    float num1, num2, num3, result;

    cout << "Insira o primeiro numero: ";
    cin >> num1; 
    cout << "Insira o segundo numero: ";
    cin >> num2;
    cout << "Insira o terceiro numero: ";
    cin >> num3;

    result = (num1 + num2 + num3)/3;

    cout << "Resultado: " << result << endl;

    system("pause");

}
