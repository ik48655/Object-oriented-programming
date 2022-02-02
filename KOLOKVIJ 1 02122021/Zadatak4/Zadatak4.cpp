/*
* Napisite klasu stack. Implementirajte je koristeci niz podataka na heapu te implementirajte sljedece funkcije:
* empty() provjerava je li stek prazan,
* top() vraca element s vrha steka,
* pop() skida element s vrha steka,
* push() dodaje element na vrh steka.
* Napisite konstruktor, copy i move konstruktor i destruktor.
*/

#include<iostream>
#include<vector>
#include<algorithm>

#define SIZE 10
using namespace std;

class Stack
{
private:

	vector<int> arr;
	int topel;
	int capp;

public:

	Stack(int size = SIZE) // default constructor
	{
		vector<int> arr(size);
		topel = -1;
		capp = size;
	}
	Stack(Stack& st) // copy constructor
	{
		arr = st.arr;
		topel = st.topel;
		capp = st.capp;
	}
	Stack(Stack&& st) // move constructor
	{
		arr = st.arr;
		topel = st.topel;
		capp = st.capp;

		st.arr.clear();
		st.topel = 0;
		st.capp = 0;
	}
	~Stack() // destructor
	{
		arr.clear();
		topel = 0;
		capp = 0;
	}
	int size()
	{
		return arr.size();
	}
	bool empty()
	{
		return arr.empty();
	}
	void push(int el)
	{
		arr.push_back(el);
	}
	void pop()
	{
		arr.pop_back();
	}
	int top()
	{
		return arr[arr.size()-1];
	}
};
int main()
{
	Stack st1(3);
	st1.push(1);
	st1.push(2);

	st1.pop();
	st1.pop();

	st1.push(3);

	cout << "Last element in stack is: " << st1.top() << endl;
	if (st1.empty())
	{
		cout << "Stack is empty!" << endl;
	}
	else
		cout << "Stack is not empty! Size of stack is: " << st1.size() << endl;

	return 0;
}