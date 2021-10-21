
#include <iostream>
#include <iomanip>
using namespace std; // Ovim su uklonjena sva std:: ispdred cout i cin //
int main()
{
	bool flag;
	cout << "unesi " << noboolalpha << true << " - " << false << endl; // Dodano je nooboolalpha pa ispisujemo bool kao int 0 ili 1 //
	cin >> flag;
	cout << boolalpha << flag << endl; 
	int a = 28391237914;
	cout << "hex " << hex << right << a << endl;
	cout << "dec " << dec << left << a << endl;
	cout << "oct " << oct << internal << a << endl;
	double pi = 3.141592;
	cout << "pi = " << fixed;
	cout << setprecision(15) << setw(30);
	cout << pi << endl;
}

