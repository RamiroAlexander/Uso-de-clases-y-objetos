#include <iostream>
#include <string>

using namespace std;

class Libro
{

private:
    string titulo;
    string autor;
    int añodePublicacion;
    int edicion;
    int cantidadPaginas;

public:
    void ingresarDatos()
    {
        cin.ignore();

        cout << "\nTitulo: ";
        getline(cin, titulo);

        cout << "Autor: ";
        getline(cin, autor);

        cout << "Año de publicacion: ";
        cin >> añodePublicacion;

        cout << "Edicion: ";
        cin >> edicion;

        cout << "Cantidad de paginas: ";
        cin >> cantidadPaginas;
    }

    void mostrarInformacion()
    {
        cout << "\n==============================";
        cout << "\nTitulo: " << titulo;
        cout << "\nAutor: " << autor;
        cout << "\nAño de publicacion: " << añodePublicacion;
        cout << "\nEdicion: " << edicion;
        cout << "\nCantidad de paginas: " << cantidadPaginas;
        cout << "\n==============================\n";
    }
};

int main()
{
    cout << "=============================" << endl;
    cout << "       Biblioteca Virtual    " << endl;
    cout << "=============================" << endl;


    const int TOTAL_LIBROS = 10;
    Libro libros[TOTAL_LIBROS];

    cout << "REGISTRO DE LIBROS\n";

    for (int i = 0; i < TOTAL_LIBROS; i++)
    {
        cout << "\nLibro #" << i + 1 << endl;
        libros[i].ingresarDatos();
    }

    cout << "\n\nLISTA DE LIBROS REGISTRADOS\n";

    for (int i = 0; i < TOTAL_LIBROS; i++)
    {
        libros[i].mostrarInformacion();
    }

    return 0;
}
