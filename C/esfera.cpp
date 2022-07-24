#include <iostream>

double volume(int n)
{
	double const pi = 3.14159;
	double vol;

	vol = (4.0/3) * pi * n * n * n;

	return vol;
}

int main()
{
	
    int R;

    std::cin >> R;

    std::cout << "VOLUME = " << volume(R) << "\n";

	return 0;

}
