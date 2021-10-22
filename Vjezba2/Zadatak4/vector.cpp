#include "header.h"
using namespace std;
void Vextor::vector_new(size_t vel) // Novi vektor
{
    arr = new int[vel];
    size = 0;
    capacity = 1;
}
void Vextor::vector_delete() // Brisanje vektora
{
    delete[] arr;
}
void Vextor::vector_push_back(int n) // Novi clan na kraju vektora
{
    if (size == capacity)
    {
        capacity *= 2;
        int* arrN = new int[capacity];
        for (int i = 0; i < (capacity - 1); i++)
        {
            arrN[i] = arr[i];
        }

        delete[] arr;

        arr = arrN;
    }

    arr[size] = n;
    size++;
}
void Vextor::vector_pop_back() // Uklanja zadnji clan u nizu
{
    size -= 1;
}
int& Vextor::vector_front() // Vraca prvi clan u nizu
{
    return arr[0];
}
int& Vextor::vector_back() // Vraca zadnji clan u nizu
{
    return arr[size - 1];
}
size_t Vextor::vector_size() // Vraca velicinu niza
{
    return size;
}
void Vextor::print_vector() // Printa vektor
{
    for (size_t i = 0; i < vector_size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}