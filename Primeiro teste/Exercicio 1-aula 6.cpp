#include <iostream>
using namespace std;


int main()
{
    int qnt_num, numero, cont_pares = 0 , cont_total = 0;
    float soma = 0, media = 0;
    
    cout<<"Quantos numeros serao inseridos?"<< endl;
    cin >> qnt_num;
    
    while(cont_total < qnt_num)
    {
            cout<<"Digite um número: "<< endl;
            cin>> numero;
            
            if(numero%2==0)
            {
                soma = soma + numero;
            cont_pares++;
               
            }
            cont_total++;
        
    }
    
    media= soma/ cont_pares;
    
    cout<<"A media foi " << media << endl;
    

    return 0;
}