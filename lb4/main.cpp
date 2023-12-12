#include <iostream>
#include <string>
#include <math.h>
#include "RSA.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	RSA crypto;

	crypto.RSA_cryptography();

	system("pause");
	return 0;
}
