#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char nome[30];
	double salarioFixo, bonus, salarioFinal;

	cin >> nome;
	cin >> salarioFixo;
	cin >> bonus;

	salarioFinal = (bonus * 0.15) + salarioFixo;
	1230.50


	cout << "TOTAL = R$ " << fixed << setprecision(2) << salarioFinal << endl;

	return 0;
}
