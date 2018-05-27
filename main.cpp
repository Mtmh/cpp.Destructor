#include <iostream>

using namespace std;

struct Persona
{
    string nombre;

    Persona(const string &nom); //<-- constructor // Pedro

    Persona();// <-- Vacio // Juan
    ~Persona(); //Destructor Nunca dentro parametros " Ñ == ~ "

    void imprime() const;
};

int main()
{
    Persona juan, pedro("Pedro");
    juan.imprime();
    pedro.imprime();

    return 0;
}

Persona::Persona() // <-- Constructor vacio
{
    nombre ="";
}

Persona::Persona(const string &nom)
{
    nombre = nom;

}

Persona::~Persona() // Destructo == Siempre vacio
{
    cout << "adios " << nombre << endl;

    // Se utiliza para liberar memoria estatica
}

void Persona::imprime() const
{
    cout << nombre << endl;
}
