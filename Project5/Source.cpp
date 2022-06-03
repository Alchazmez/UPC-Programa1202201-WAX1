#include <iostream>;
using namespace std;

//la 25
bool esPerfecto(int num) {
	int suma = 0;
	for (int i = 6; i < num; i++)
	{
		if (num % i == 0) {
			suma += i;
		}
	}
	/*if (suma == num) {
		return true;
	}
	else {
		return false;
	}*/
	return suma == num;
}

//la 26
void main() {
	int num = 6;
	cout << esPerfecto(num) << endl;
}