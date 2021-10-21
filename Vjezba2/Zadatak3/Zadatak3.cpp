#include<iostream>
using namespace std;
struct point
{
	int x, y;
};
struct rectangle
{
	point dl;
	point ur;

};
struct circle
{
	unsigned r;
	int x, y;

	void newCir()
	{
		cout << "Enter radius and coordinates of center: " << endl;
		cin >> r;
		cin >> x;
		cin >> y;
	}
};
rectangle* newRect(int N)
{
	rectangle* pravokut = new rectangle[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Enter coordinates for down left point: " << endl;
		cin >> pravokut[i].dl.x;
		cin >> pravokut[i].dl.y;
		cout << "Enter coordinates for upper right point: " << endl;
		cin >> pravokut[i].ur.x;
		cin >> pravokut[i].ur.y;
	}
	return pravokut;
}
bool rectinters(int dlY, int dlX, int urX, int urY, int cX, int cY, int cR)
{
	int nearX = max(dlX, min(urX, cX));
	int nearY = max(dlY, min(urY, cY));
	if (((nearX - cX) * (nearX - cX) + (nearY - cY) * (nearY - cY)) <= cR * cR)
		return true;
	return false;
}
int intersnum(const rectangle* (&rectangle), const circle &cir,int N)
{
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (rectinters(rectangle[i].dl.y, rectangle[i].dl.x, rectangle[i].ur.x, rectangle[i].ur.y, cir.x, cir.y, cir.r))
			cnt++;
	}
	return cnt;
}
int main()
{
	circle cir;
	const rectangle* rectangle;
	int N;
	cout << "Enter number of rectangles: \n" << endl;
	cin >> N;

	cir.newCir();
	rectangle = newRect(N);

	cout << numOfInter(rectangle, cir, N);
	delete[] rectangle;
	return 0;
}