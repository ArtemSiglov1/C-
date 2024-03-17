#include <iostream>

	//#include<cmath>
	int main()
	{
		int a = 10;
		int b = 15;
		int c = 10;
		int P = a + b + c;
		double p = (double)P / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		std::cout << P << "\n" << S;

	}
