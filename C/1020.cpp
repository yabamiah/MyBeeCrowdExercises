#include <iostream>

int main()
{
	int dias;

	std::cin >> dias;

	int ano, mes;

	ano = dias / 365;
	dias -= (ano*365);

	mes = (dias/30);
	dias -= (mes*30);

	std::cout << ano << " ano(s)\n";
	std::cout << mes << " mes(es)\n";
	std::cout << dias << " dias(s)\n";

	return 0;
}
