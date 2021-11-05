#include <iostream>
#include <string>
using namespace std;

int cntStrInStr(string str, string substr) {
    int count = 0;
    size_t nPos = str.find(substr);
    while (nPos != string::npos)
    {
        count++;
        nPos = str.find(substr, nPos + 1);
    }
    return count;
}
int main()
{
    int count;
    string str = "Ovo je string u kojem se rijec string ponavlja dva puta.";
    string findMe = "string";

    count = cntStrInStr(str, findMe);
    cout << "Broj Ponavljanja: " << count << endl;
}