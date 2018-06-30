#include "FGraph.h"
template <class N, class E>
FGraph<N,E>::FGraph(){}
template <class N, class E>
void FGraph<N,E>::menu(unsigned int op){
    cout <<"Trabajo Final Ya no Ya alv"<<endl;
	CGraph<char,int> grafo;
	leer_txt();

	cout <<"Ingrese 1 para procesar el grafo del archivo Txt"<<endl;
	cout <<"Ingrese 2 Si quiere mostrar los detalles del grafo(Draw)"<<endl;
	cout <<"Ingrese 0 para salir del programa"<<endl;
	cout <<"Que opcion le gustaria acceder :";
	cin >>op;
	switch(op)
	{
    case 0:
        ///system("close");
        ///system('cls');
    case 1:{
            cout <<"1"<<endl;
            ///void leer_txt();
        }
    case 2:{
            cout <<"Draw(Proceso)"<<endl;
        }
    default:
        cout <<"Ingrese un valor correcto"<<endl;
        cout << "Darling Darling Stand By Me" << endl;
	}
}
template <class N, class E>
void FGraph<N,E>::leer_txt(unsigned int a)
{
    if(a == 1){
        cout << "Grafo de 20 elementos"<<endl;
        ifstream archivo_entrada("grafo1.txt");;
        string linea;

        int contador = 0;
        int max=62;

        while(getline(archivo_entrada, linea)) {

                if(max == contador) {
                        cout << linea << endl;
                }

                contador++;
        }

    }
    else{
        cout <<"Grafo de 1M de elementos"
        ifstream archivo_entrada("grafo1.txt");;
        string linea;

        int contador = 0;
        int max=42220;

        while(getline(archivo_entrada, linea)) {

                if(max == contador) {

                }
                contador++;
        }
    }
}
template <class N, class E>
void FGraph<N,E>::mostrar(unsigned int a)
{

}
