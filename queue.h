#include <deque>
using namespace std;

template <typename U>

class Queue{
private:
    deque <U> lista;
public:
    deque<U> getLista(){
        return lista;
    }
    bool vacio(){
        return lista.empty();
    }
    double tamaño(){
        return lista.size();
    }
    U Frontal(){
        return lista[0];
    }
    U Back(){
        return lista[lista.size()-1];
    }
    void añadir(U x){
        lista.push_back(x);
    }
    void quitarFrente(){
        lista.pop_front();
    }
    Queue <U> operator+(Queue <U> lista2){
        deque <U> lis(lista2.getLista);
        Queue <U> lista3;
        for(double i=0;i<lista.size();++i){
            lista3.añadir(lista[i]);
        }
        for(double i=0;i<lis.tamaño();++i){
            lista3.añadir(lis[i]);
        }
        return lista3;
    }
    Queue <U> operator-(Queue <U> lista2){
        deque <U> lis(lista2.getLista());
        Queue <U> lista3;
        for(double i=0;i<lista.size();++i){
            double cont=0;
            for(int j=0;j<lis.tamaño();++j){
                if(lista[i]==lis[j]){
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
