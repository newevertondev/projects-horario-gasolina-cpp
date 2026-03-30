
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {

    int horario;
    string nome;
    float gasolina;
    
    cout << "Seja bem vindo! Qual seu nome? ";
    cin >> nome;
 
    cout<< "Quantas horas são? ";
    cin >> horario;
    
    if ((horario >= 6 )  && (horario <=12))
    {
    cout <<"Bom dia!  "<<nome <<endl;
    } else if ((horario >= 12) && (horario <= 18))
            {
            cout << "Boa tarde! "<<nome <<endl;
            } else if ((horario >= 18 && horario <= 23) || (horario >= 0 && horario < 6)) 
                {
                    cout << "Boa noite! "<<nome <<endl;
                } else 
                    {
                        cout <<"Esse horário está invalido, favor reiniciar a aplicação!"; return(1);
                    }
                

    cout << nome <<" Você passou pela placa de abastecer, me informe o preço do gasolina: "<<endl;
    cin >> gasolina;

    
    if (gasolina >= 5.98)
    {
        cout << "A gasolina está custando " <<gasolina<< ", está caro!"<<endl;
    }
         else {
                    cout << "A gasolina está custando " <<gasolina<< ", está barato"<<endl;
         }
    
return 0;

}