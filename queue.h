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
    double tama�o(){
        return lista.size();
    }
    U Frontal(){
        return lista[0];
    }
    U Back(){
        return lista[lista.size()-1];
    }
    void a�adir(U x){
        lista.push_back(x);
    }
    void quitarFrente(){
        lista.pop_front();
    }
    Queue <U> operator+(Queue <U> lista2){
        deque <U> lis(lista2.getLista);
        Queue <U> lista3;
        for(double i=0;i<lista.size();++i){
            lista3.a�adir(lista[i]);
        }
        for(double i=0;i<lis.tama�o();++i){
            lista3.a�adir(lis[i]);
        }
        return lista3;
    }
    Queue <U> operator-(Queue <U> lista2){
        deque <U> lis(lista2.getLista());
        Queue <U> lista3;
        for(double i=0;i<lista.size();++i){
            double cont=0;
            for(int j=0;j<lis.tama�o();++j){
                if(lista[i]==lis[j]){
                    cont=cont+1;
                }
            }
            if(cont==0){
                lista3.a�adir(lista[i])
            }
        }
        return lista3;
    }
};
