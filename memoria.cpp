#include <iostream>
#include <vector>

using namespace std;

void imprimir(vector<int> &numeros)
{
    numeros.push_back(100);
    for (int i : numeros)
    {
        cout << i << endl;
    }
}

void sumar(int &a, int &b, int &resultado)
{
    resultado = a + b;
}

void sumarConPunteros(int *&a, int *&b, int *&resultado)
{
    a = new int;
    b = new int;
    resultado = new int;
    *a = 1;
    *b = 2;
    *resultado = *a + *b;
}

void arregloConPunteros(int *&enteros)
{
    enteros = new int[10];
    for (int i = 1; i <= 10; i++)
    {
        *enteros = 100 * i;
        enteros++;
    }
}

void imprimeArregloPunteros(int* enteros, int tamano)
{
    for(int i = 0; i < tamano; i++)
    {
        enteros--;
        cout << *enteros << endl;
    }
}

int main()
{
    int* enteros;
    arregloConPunteros(enteros);
    imprimeArregloPunteros(enteros, 10);
     /*

    int *p1;
    int *p2;
    int *p3;

    sumarConPunteros(p1, p2, p3);
    cout << "El valor contenido en la posición a la que apunta p1 es " << *p1 << endl;

    cout << "El resultado de la suma con punteros es " << *p3 << endl;
    delete p1;
    delete p2;
    delete p3;

    vector<int> enteros = {1, 2, 3};
    imprimir(enteros);
    cout << "El tamano del arreglo es " << enteros.size() << endl;

    int x = 3;
    int y = 5;
    int z;
    cout << "En este procesador, un entero(int) ocupa " << sizeof(int) << " bytes" << endl;
    sumar(x, y, z);
    cout << "El resultado es " << z << endl;*/
    return 0;
}
