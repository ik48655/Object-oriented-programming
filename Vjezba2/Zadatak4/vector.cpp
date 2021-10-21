#include "header.h"
using namespace std;
void Vextor::vector_new(size_t vel)
{
    arr = new int[vel];
    size = 0;
    capacity = 1;
}
void Vextor::vector_delete()
{
    delete[] arr;
}
void Vextor::vector_push_back(int n)
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
void Vextor::vector_pop_back()
{
    size -= 1;
}
int& Vextor::vector_front()
{
    return arr[0];
}
int& Vextor::vector_back()
{
    return arr[size - 1];
}
size_t Vextor::vector_size()
{
    return size;
}
void Vextor::print_vector()
{
    for (size_t i = 0; i < vector_size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}