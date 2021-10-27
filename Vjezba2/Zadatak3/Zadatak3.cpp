#include<iostream>
using namespace std;
struct point // Struktura za tocku u koordinatnom sustavu
{
	int x, y;
};
struct rectangle // Struktura pravokutnik s donjim lijevim i gornjim desnim tockama
{
	point dl;
	point ur;

	rectangle* newRect(int N) // Funkcija za unos novog pravokutnika u niz
	{
		rectangle* pravokut = new rectangle[N]; // Alociranje memorije za pravokutnike

		for (int i = 0; i < N; i++) // Dok god je i manje od unesenog broja pravokutnika, unosimo pravokutnike
		{
			cout << "[" << i+1 << "]" << "Enter coordinates for down left point: " << endl; // X i Y koordinate donjeg lijevog kantuna
			cin >> pravokut[i].dl.x;
			cin >> pravokut[i].dl.y;
			cout << "[" << i+1 << "]" << "Enter coordinates for upper right point: " << endl; // X i Y koordinate gornjeg desnog kantuna
			cin >> pravokut[i].ur.x;
			cin >> pravokut[i].ur.y;
		}
		return pravokut;
	}
};
struct circle // Struktura kruznica
{
	unsigned r; // Polumjer odnosno radius
	int x, y; // Koordinate sredista

	void newCir() // Funkcija za unos kruznice
	{
		cout << "Enter radius and coordinates of center: " << endl;
		cin >> r;
		cin >> x;
		cin >> y;
	}
};

bool rectinters(int dlY, int dlX, int urX, int urY, int cX, int cY, int cR) // Presjek pravokutnika s kruznicom
{
	int nearX = max(dlX, min(urX, cX)); // Trazimo koordinatu X koja je najbliza koordinati X sredista kruznice
	int nearY = max(dlY, min(urY, cY)); // Trazimo koordinatu Y koja je najbliza koordinati X sredista kruznice
	if (((nearX - cX) * (nearX - cX) + (nearY - cY) * (nearY - cY)) <= cR * cR) // Formula za presjek kruznice s pravokutnicima
		return true;
	return false;
}
int intersnum(const rectangle* (&rectangle), const circle &cir,int N) // Funkcija koja broji broj presjeka na osnovu bool vrijednosti 
{
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (rectinters(rectangle[i].dl.y, rectangle[i].dl.x, rectangle[i].ur.x, rectangle[i].ur.y, cir.x, cir.y, cir.r)) // Na osnovu true ili false se brojac povecava
			cnt++;
	}
	return cnt;
}
int main()
{
	circle cir; // Kruznica
	const rectangle* nizprvkt; // Niz pravokutnika
	rectangle prvkt; // Pravokutnik

	int N; // Broj pravokutnika
	cout << "Enter number of rectangles: \n";
	cin >> N;

	cir.newCir(); // Unos kruznice
	nizprvkt= prvkt.newRect(N); // Unos pravokutnika u niz

	cout << "Number of rectangles intersecting with circle is: " << intersnum(nizprvkt, cir, N); // Ispis broja pravokutnika koji sjeku kruznicu
	delete[] nizprvkt;
	return 0;
}