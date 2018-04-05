#ifndef CHECKLOGIN_H
#define CHECKLOGIN_H
#include <string>
#include<lds.h>
#include<pessoa.h>


using namespace std;


class checkLogin{
    private:

    public:
        bool checaLogin(Lds<Pessoa> &v,string nome,string usr,string senha){
            for(int i =0;i<=v.getN();i++)
            {
                if(v[i]->getLogin() == usr){
                    cout<<"Ja existe um usuario com esse nome"<<endl;
                    return false;
                }
            }

            v.inserir(Pessoa(nome,usr,senha));
            return true;
    }



};
#endif // CHECKLOGIN_H
