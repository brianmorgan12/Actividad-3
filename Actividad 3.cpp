#include <iostream>
	
 using namespace std;
 
 int main(void) {
 	
 	double C, F;
 	
 	cout <<"Inglese la cantidad de grados Celsius a convertir:\n" << endl;
 	cin >> C;
 	
 	F = 9 / 5.0 * C + 32;
 	
 	cout << "\n" << C << " grados Celsius equivalen a " << F << "grados Fahrenheit.\n";
 	
 	cout <<"Inglese la cantidad de grados Fahrenheit a convertir:\n" << endl;
 	cin >> F;
 	
 	C= (F - 32 ) * 5/9;
 	
 	cout << "\n" << F << " grados Fahrenheit equivalen a " << C << "grados Celsius.\n";
 	
 	
 	return 0;
 }
