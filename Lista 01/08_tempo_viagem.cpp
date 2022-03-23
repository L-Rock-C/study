#include <iostream>

using namespace std;

int main (){

    int h_out, m_out, h_in, m_in, result;

    cout << "Insira a hora de saida (HH MM):__ __\b\b\b\b\b";
	cin >> h_out >> m_out;
    cout << "Insira a hora de chegada (HH MM):__ __\b\b\b\b\b";
	cin >> h_in >> m_in;
    
    result = ((h_in * 60) + m_in) - ((h_out * 60) + m_out);

    cout << "Tempo de viagem: " << result;
    system("pause");
}
