#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega el elemento valor (dado) a mi_set (dado)
void agregarASet(set<int> *mi_set,int valor)
{
    mi_set->insert(valor); // inserto el elemento mediante un apunatdor

}

//devuelve true si valor (dado) existe en mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
    for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++) // declaro un iterador y recorre el set
    {
        if(*it == valor) // veo si existe el valor set
        {
            return true; // solo es por si encuentra el valor
        }
    }
    return false; // si no lo encuentra es falso
}

//devuelve la cantidad de elementos de mi_set (dado)
int tamano(set<int> mi_set)
{
    return mi_set.size(); // uso a funcion size para ver el tamaño
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // se declara un set nuevo
    for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // recorremos el set con iterador
    {
        for(set<int>:: iterator it2= mi_set2.begin(); it2 != mi_set2.end(); it2++) // reccorremos el segundo set con iterador
            {
            if(*it == *it2) // veo si los elementos de los dos set son iguales
            {
                mi_set3.insert(*it); // pongo los elementos que sean iguales
            }
        }
    }
    return mi_set3; // retorno los elementos del set
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // declara un set nuevo
    for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // usamos el iterador para ver los elementos del set1
    {
        for(set<int>:: iterator it2 = mi_set2.begin(); it2!= mi_set2.end(); it2++) //usamos el iterador para ver los elementos del set2
        {
            mi_set3.insert(*it); // pongo los elementos del set 1
            mi_set3.insert(*it2); // pongo los elementos del set 2
        }
    }
    return mi_set3;  // retorna los elemento de mi set3 que agregue anteriomente
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> set3; // declara un set 3

    for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++) // se recorre el set    {
        for(set<int>::iterator it2 = mi_sub_set.begin(); it2!= mi_sub_set.end(); it2++) // reccore el segundo set
        {
            if(*it==*it2) // para ver las intersecciones
            {
                set3.insert(*it); // meto las intersecciones

            }

        }

    if(set3==mi_sub_set) // vinedo si las interscciones son iguales al suconjunto
    {
        return true; // devuelve true
    }

    return false; //  devuelve false
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
