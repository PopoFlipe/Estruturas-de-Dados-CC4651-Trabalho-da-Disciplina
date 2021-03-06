#ifndef compromisso_H
#define compromisso_H
#include <string>
#include <sstream>
using namespace std;


class Compromisso{
    private:
        string titulo;
        string descricao;
        int dia;
        int mes;
        int ano;
        int hora;
        int minuto;
    public:
        Compromisso() {
            titulo = "";
            descricao = "";
            dia = 0;
            mes = 0;
            ano = 0;
            hora = 0;
            minuto = 0;
        }
        Compromisso(string tit, string desc, int d, int m , int a, int h, int min ) {
            titulo = tit;
            descricao = desc;
            dia = d;
            mes = m;
            ano = a;
            hora = h;
            minuto = min;
        }
        string concatenaData(){
            string Resultado;
            stringstream convertD;
            stringstream convertM;
            stringstream convertA;
            convertD << dia;
            convertM << mes;
            convertA << ano;
            Resultado = convertD.str() + "/"+convertM.str()+"/"+convertA.str();
            return Resultado;
        }
        string converterHorario(){//converte hora ou min para string
            string Resultado;
            stringstream convertH;
            convertH << hora;
            stringstream convertMin;
            convertMin << minuto;
            Resultado = convertH.str();
            if(hora<10)
               Resultado = "0" + convertH.str();
            else
                Resultado = convertH.str();
            Resultado = Resultado +":";
            if(minuto<10)
                Resultado = Resultado +"0"+convertMin.str();
            else
                Resultado = Resultado + convertMin.str();

            return Resultado;
        }
        bool setHora(int i){
            if(i<0 && i>23)
                return false;
            mes = i;
            return true;
        }

        bool setMinuto(int i){
            if(i<0 && i>59)
               return false;
            mes = i;
            return true;
        }
       int getHora(){
         return hora;
       }
       int getMinuto(){
        return minuto;
       }
       bool setMes(int i){
            if(i<1 && i>12)
                return false;
            mes = i;
            return true;
        }

        int getMes(){
            return mes;
        }


        void setDia(int i){
            dia = i;

        }
        int getDia(){
            return dia;
        }
        void setAno(int i){
            ano = i;

        }
        int getAno(){
            return ano;
        }

        void setTitulo(string a){
            titulo = a;
        }
        string getTitulo(){
            return titulo;
        }
        void setDescricao(string a){
            descricao = a;
        }
        string getDescricao(){
            return descricao;
        }
        bool operator > ( Compromisso y){//retorna true se o 1 parametro acontecer depois do segundo
           if(getAno() > y.getAno())
               return true;
           else{
               if(getMes() > y.getMes() && getAno() == y.getAno())
                   return true;
               else{
                   if(getDia() > y.getDia() && getMes() == y.getMes() && getAno() == y.getAno())
                       return true;

                   else{
                     if(getHora() > y.getHora() && getDia() == y.getDia() && getMes() == y.getMes() && getAno() == y.getAno())
                          return true;
                     else{
                          if(getMinuto() > y.getMinuto() && getHora() == y.getHora() && getDia() == y.getDia() && getMes() == y.getMes() && getAno() == y.getAno())
                           return true;
                          else
                           return false;
                        }
                     }
               }
           }
       }

};
// bool operator > (Compromisso x, Compromisso y){//retorna true se o 1 parametro acontecer depois do segundo
//    if(x.getAno() > y.getAno())
//        return true;
//    else{
//        if(x.getMes() > y.getMes() && x.getAno() == y.getAno())
//            return true;
//        else{
//            if(x.getDia() > y.getDia() &&x.getMes() == y.getMes() && x.getAno() == y.getAno())
//                return true;
//            else
//                return false;
//        }
//    }
//}

#endif // compromisso_H
