#include<iostream>
#include<cmath>
#include<clocale>


int main() {
	setlocale(LC_ALL, "RU");
	double x, y;
	std::cin >> x;
	double a = 1.20, b = 2.40;
	if (x < -2) y = x + (double(cos(a * x)) / (pow(x, 2) + 1));
	if (x >= -2 && x <= 5) y = b * sin(a / x);
	if (x > 5) y = exp(x) + log(fabs(x));
	std::cout << "Значение функции в точке:" << y;
	return 0;
}