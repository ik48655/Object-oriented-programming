#include <iostream>
using namespace std;

template <typename T>
void sortArr(T arr[], int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}
}

template <>
void sortArr<char>(char arr[], int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (tolower(arr[i]) < tolower(arr[j]))
				swap(arr[i], arr[j]);
		}
	}
}

int main() {
	int a1[10] = { 1, 531, 66, 69, 420, 1991, 777, 666, 0, 1000 };
	char s[15] = {'A','b','C','d','E','f','G','h','I','j','K','l','A','a','a'};
	for (int i = 0; i < 10; ++i)
		cout << a1[i] << " ";
	cout << s << endl;

	sortArr(a1, 10);
	sortArr(s, 15);

	for (int i = 0; i < 10; ++i)
		cout << a1[i] << " ";
	cout << s << endl;
}