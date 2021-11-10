#include <iostream>
#include <string>
using namespace std;

int cntStrInStr(string str, string substr)
{
    int count = 0; // Counter is set to zero
    size_t nPos = str.find(substr); // First apperenace of substring
    while (nPos != string::npos) // If not end of string
    {
        count++; // Counter is increased by one
        nPos = str.find(substr, nPos + 1);
    }
    return count; // Counter is returned
}
int main()
{
    int count;
    string str = "Ovo je string u kojem se rijec string ponavlja dva puta.";
    string findMe = "string";

    count = cntStrInStr(str, findMe);
    cout << "Broj Ponavljanja: " << count << endl;
}