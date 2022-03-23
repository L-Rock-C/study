#include <iostream>

using namespace std;

int main (){

    int num1, num2;

    cout << "Insira o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Insira o segundo numero inteiro: ";
    cin >> num2;
    
    cout << "Adicao: " << num1 + num2 << endl;
    cout << "Subtracao: " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;
    cout << "Quociente da divisao: " << num1 / num2 << endl;
    cout << "Resto da divisao: " << num1 % num2 << endl;

    system("pause");

}
