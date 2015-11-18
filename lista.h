#include <vector>
using namespace std;

template <typename A>

class Lista{
private:
    vector <A> lista;
public:
    double tamaño(){
        return lista.size();
    }
    vector <A> getLista(){
        return lista;
    }
    void insertar(A x,double indice){
        lista.insert(lista.begin()+indice,item);
    }
    void añadir(A x){
        lista.push_back(x);
    }
    void borrar(double indice){
        lista.erase(lista.begin()+indice);
    }
    Lista <A> operator+(Lista <A> lista2){
        vector <A> vec(lista2.getLista());
        Lista <A> lista3;
        for(int i=0;i<lista.size();++i){
            lista3.añadir(lista[i]);
        }
        for(int i=0;i<vec.size();++i){
            lista3.añadir(vec[i]);
        }
        return lista3;
    }
    Lista <A> operator-(Lista <A> lista2){
        vector <A> vec(lista2.getLista());
        Lista <A> lista3;
        for(int i=0;i<lista.size();++i){
            int cont=0;
            for(int j=0;j<vec.size();++j){
                if(lista[i]==vec[j]){
                    cont=cont+1;
                }
            }
            if(cont==0){
                lista3.añadir(lista[i])
            }
        }
        return lista3;
    }
};
