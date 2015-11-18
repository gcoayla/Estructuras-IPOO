#include <vector>
using namespace std;

template<typename A>

class Stack{
private:
    vector <A> lista;
public:
    vector <A> getLista(){
        return lista;
    }
    void añadir(A x){
        lista.push_back(x);
    }
    void quitar(){
        lista.pop_back();
    }
    Stack <A> operator+ (Stack <A> lista2){
        Stack<A> lista3;
        vector <A> vector1(lista);
        vector <A> vector2(lista2.getLista());
        for(long long int i=0;i<vector1.size();i++){
            lista3.añadir(vector1[i]);
        }
        for(long long int i=0;i<vector2.size();i++){
            lista3.añadir(vector2[i]);
        }
        return stack3;
    }
    Stack <A> operator-(Stack <A> lista2){
        vector <A> vector2(lista2.getLista());
        Stack <A> lista3;
        for(int i=0;i<lista.size();++i){
            int cont=0;
            for(int j=0;j<vector2.size();++j){
                if(lista[i]==vector2[j]){
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
