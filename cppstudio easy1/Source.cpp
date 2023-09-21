/*
Найти Y, если Y = X1 + X2 + … + Xn,   X = Z^3 - B + A^2 / tg^2?. Количество X вводятся
пользователем программы. Для каждого X значения Z, B, А, ? разные (вводятся пользователем
программы).
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	float sum{ 0 };
	do
	{
		std::cout << "Enter quantity x: ";
		std::cin >> x;
	} while (x < 0);

	for (int i{ 1 }; i <= x; ++i)
	{
		std::cout << "Введите значения Z, B, A, Betta для X" << i << std::endl;
		float z{ 0 }, b{ 0 }, a{ 0 }, bet{ 0 };
		std::cout << "Z= ";
		std::cin >> z;
		std::cout << "B= ";
		std::cin >> b;
		std::cout << "A= ";
		std::cin >> a;
		std::cout << "Betta= ";
		std::cin >> bet;
		sum += pow(z, 3) - b + pow(a, 2) / pow(tan(bet), 2);
	}
	std::cout << sum;
    return 0;
}
