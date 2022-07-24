#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int numero, horas;
	double dinheiro, salario;

	cin >> numero;
	cin >> horas;
	cin >> dinheiro;

	salario = horas * dinheiro;

	cout << "NUMBER = " << numero << std::endl;
	cout << "SALARY =  U$ " << fixed << setprecision(2) << salario << std::endl;

	return 0;



}
