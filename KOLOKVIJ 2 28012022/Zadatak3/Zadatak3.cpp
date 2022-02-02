/*Napisite template klasu vektor i potrebne operatore tako da sljedeci program 
* pravilno ispisuje skalarni produkt vektora ( u primjeru je skalarni produkt 18 )
*/

#include<iostream>
#include<vector> 

using namespace std;

template <typename T>
class vektor {
	T prvi, drugi;
public:
	vektor(T a, T b) {
		prvi = a;
		drugi = b;
	}

	int operator* (vektor <T> v) {
		int novi = this->prvi * v.prvi + this->drugi * v.drugi;
		return novi;
	}

	friend ostream& operator<< (ostream& os, vektor v);
};

ostream& operator<< (ostream& os, vektor <int> v) {
	os << "(" << v.prvi << ", " << v.drugi << ")";
	return os;
}

int main() {
	vektor <int> v1(2, 3), v2(3, 4);
	cout << v1 << " * " << v2 << " = " << v1 * v2;
}