#include <iostream>

using namespace std;

int main (){

    int age;
    float height;
    char firstLatter;
    string name;

    cout << "Digite sua idade: ";
    cin >> age;
    cout << "Digite sua altura: ";
    cin >> height;
    cout << "Digite a primeira letra do seu nome: ";
    cin >> firstLatter;
    cout << "Digite seu nome completo: ";
    getline(cin, name);

    cout << "Idade: " << age << endl;
    cout << "Altura: " << height << endl;
    cout << "Primeira letra do nome: " << firstLatter << endl;
    cout << "Nome completo: " << name << endl;

    system("pause");
}
