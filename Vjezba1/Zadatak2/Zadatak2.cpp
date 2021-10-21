#include<iostream>
#include <ctime> // Ovo moramo ukljuciti da bismo koristili time funkciju.
#include <iomanip> // Ovo ukljucujemo da mozemo koristit manipulatore.
using namespace std; // Da ne pisemo stalno std:: koristimo using namespace

struct matrix
{
	int row, col; // Struktura sadrzi retke i stupce koji cine matricu
	float** mat; // Ovaj float nam je zapravo matrica, mora biti float zbog decimalnog mjesta
};

void input(matrix* in, int m, int n) // Funkcija za unos matrice 
{
	in->row = m; // Dohvacamo poadatak redak iz strukture, tj tacnije varijabla m nam oznacava redak
	in->col = n; // Dohvacamo poadatak stupac iz strukture, tj tacnije varijabla m nam oznacava redak
	in->mat = new float* [m]; // Dinamicki alociramo memoriju za retke unutar matrice, tacnije "odredjujemo" memoriju za m
	for (int e = 0; e < m; e++)
		in->mat[e] = new float[n]; // Dinamicki alociramo memoriju za stupce unutar matrice, tacnije "odredjujemo" memoriju za n
	for (int i = 0; i < m; i++) // Ovaj blok koji sadrzi dvije for petlje nam je standardni unos redaka i stupaca, prva for petlja "vrti" koordinatu za retke
	{
		for (int j = 0; j < n; j++) // Druga for petlja "vrti" koordinatu za stupce
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> in->mat[i][j]; // Unosimo podatke u matricu na odgovarajuca polja koja su obiljezena koordinatama [i][j]
		}
	}
	cout << "\n";
}
void random(matrix* randmat, int m, int n)
{
	srand((unsigned)time(0)); // Da nema ovog srand postojala bi mogucnost da nam se pojave dva ista broja iako rand generira random broj ( jako mala vjerovatnoca ali opet je treba iskljuciti ) 
	float number, a, b;
	randmat->row = m; // Pristupamo retcima
	randmat->col = n; // Pristupamo stupcima

	randmat->mat = new float* [m]; // Alociramo memoriju za retke 
	for (int e = 0; e < m; e++)
		randmat->mat[e] = new float[n]; // Alociramo memoriju za stupce

	cout << "Enter the number interval for elements of the second matrix:\n"; //Unosimo interval unutar kojeg generiramo rand brojeve
	cout << "a = ";
	cin >> a; // Floor intervala
	cout << "b = ";
	cin >> b; // Roof intervala
	cout << "\n";
	if (b < a) // Ukoliko je interval napisan "naopako" zamjenimo vrijednost a i b
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = 0; i < m; i++) // For petlja za i koordinatu
	{
		for (int j = 0; j < n; j++) // For petlja za j koordinatu
		{
			number = a + (rand() / (RAND_MAX / (b - a))); // Da bi smo dobili float unutar intervala a i b djelimo rand sa ( rand_max / razlika izmedju a i b) i dodajemo ga na a
			randmat->mat[i][j] = number;
		}
	}
}
int addsub(matrix inpmat, matrix randmat, matrix* add, matrix* sub) // Zbrajanje i oduzimanje (ima verzija gdje je i odvojeno)
{

	if ((inpmat.col == randmat.col) && (inpmat.row == randmat.row)) // Provjeravamo uvjet kvadraticnosti da vidimo da li mozemo zbrajati/oduzimati unesenu i generiranu matricu
	{
		int n = randmat.row;
		int m = randmat.col;

		add->row = sub->row = n;
		add->col = sub->col = m;

		add->mat = new float* [m]; // Alociramo memoriju za zbrajanje matrica
		for (int e = 0; e < m; e++)
		{
			add->mat[e] = new float[n];
		}

		sub->mat = new float* [m]; // Alociramo memoriju za oduzimanje matrica
		for (int e = 0; e < m; e++)
		{
			sub->mat[e] = new float[n];
		}

		for (int i = 0; i < inpmat.col; i++) // Koordinata redaka
		{
			for (int j = 0; j < inpmat.row; j++) // Koordinata stupaca
			{
				add->mat[i][j] = inpmat.mat[i][j] + randmat.mat[i][j]; // Zbrajanje clanova sa istim [i][j] koordinatama
				sub->mat[i][j] = inpmat.mat[i][j] - randmat.mat[i][j]; // Oduzimanje clanova sa istim [i][j] koordinatama
			}
		}
		return 1;
	}
	else
	{
		return 0; // Ako nije ispunjen uvjet kvadraticnosti ne mozemo zbrajati/oduzimati
	}
}
void transpose(matrix in, matrix* tran) // Funkcija za transponiranje 
{
	int n = in.col;
	int m = in.row;

	tran->row = n;
	tran->col = m;

	tran->mat = new float* [n];
	for (int e = 0; e < n; e++)
	{
		tran->mat[e] = new float[m];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tran->mat[j][i] = in.mat[i][j]; // Zamjenjujemo vrijednost redaka i stupaca da bi dobili transponiranu matricu
		}
	}
}
void multiply(matrix in, matrix randmat, matrix* multi) // Funkcija za mnozenje matrica
{
	multi->row = in.row;
	multi->col = randmat.col;

	multi->mat = new float* [in.row]; // Alociramo memoriju za multiplikaciju/mnozenje
	for (int e = 0; e < in.row; e++)
	{
		multi->mat[e] = new float[randmat.col];
	}
	for (int i = 0; i < in.row; i++)
	{
		for (int j = 0; j < randmat.col; j++)
		{
			multi->mat[i][j] = 0;
		}
	}
	for (int i = 0; i < in.row; i++) // Koordinata koja oznacava retke
	{
		for (int j = 0; j < randmat.col; j++) // Koordinata koja oznacava stupce
		{
			for (int k = 0; k < randmat.row; k++) // Ovo je ovdje jer je mnozenje matrica kompleksno i ne bi se moglo izvesti samo s [i] i [j]
			{
				multi->mat[i][j] += in.mat[i][k] * randmat.mat[k][j]; // Mnozenje dobijemo tako sto mnozimo retke sa stupcima za svaku koordinatu
			}
		}
	}
}
void delmat(matrix* deleteMat) //Brisanje matrice
{
	for (int i = 0; i < deleteMat->row; i++)
	{
		delete[]deleteMat->mat[i];
	}
	delete[]deleteMat->mat;
}
void output(matrix out) // Funkcija za ispis matrice
{
	for (int i = 0; i < out.row; i++)
	{
		for (int j = 0; j < out.col; j++)
		{
			cout << setprecision(4) << fixed << out.mat[i][j] << " "; // Setprecision nam odredjuje da je preciznost decimalnog mjesta postavljena na 4 decimale
		}
		cout << "\n";
	}
}
int main()
{
	matrix in, randMatrix, sub, tran, addit, multi;
	int m1, n1, m2, n2;

	cout << "Enter number of rows and columns of matrix:\n"; //Unosimo broj redaka i stupaca prve matrice koju sami unosimo
	cin >> m1 >> n1;
	cout << "\n";
	input(&in, m1, n1);
	cout << "Entered matrix:\n"; //Nasa unesena matrica se ispisuje
	output(in);

	cout << "\nEnter number of rows and columns of the second matrix:\n"; //Unosimo broj redaka i stupaca za drugu (generiranu) matricu
	cin >> m2 >> n2;
	cout << "\n";

	random(&randMatrix, m2, n2);
	cout << "Random generated matrix:\n"; //Generirana matrica se ispisuje
	output(randMatrix);
	cout << endl;

	if ((addsub(in, randMatrix, &addit, &sub)) == 1)
	{
		cout << "Addition of matrices:" << endl;
		output(addit);
		cout << "\n";
		cout << "Substraction of matrices:" << endl;
		output(sub);
		cout << "\n";
	}
	else
	{
		cout << endl << "ERROR: Matrices aren't the same dimensions! Can't add or substract!" << endl << endl;
	}

	if (n1 == m2) // Matrice moraju biti ulancane tj. broj stupaca prve mora biti jednak broju redaka druge
	{
		multiply(in, randMatrix, &multi);
		cout << "Result of multiplication of matrixes:\n";
		output(multi);
		cout << "\n";
	}
	else
		cout << "ERROR: The number of columns of the first matrix isn't the same number as the number of rows of the second matrix!\n\n";

	transpose(in, &tran);
	cout << "Transposed matrix:\n";
	output(tran);

	delmat(&in); // Linije 216 - 221 brisanje memorije u koje smo spremili unos, generiranu matricu, rezultat oduzimanja, rezultat zbrajanja, rezultat mnozenja i transponiranje
	delmat(&randMatrix);
	delmat(&sub);
	delmat(&addit);
	delmat(&multi);
	delmat(&tran);
}