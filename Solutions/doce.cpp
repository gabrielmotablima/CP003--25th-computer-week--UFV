# include <bits/stdc++.h>
 
using namespace std;
 
int  resultado;

int main (){
    
    int A, B;
    vector<int> fracao;

    fracao.push_back(2);
    fracao.push_back(3);
    fracao.push_back(5);

    int i=0;
    int sum = 0;
    cin >> A;
    cin >> B;


    
        if( A > B )
        {
            resultado = A/B;

            while( resultado > 1)
            {   
                sum++;
                resultado = resultado/fracao[i];
                if((resultado%fracao[i]) != 0)
                {
                    i++;
                }
            }                            
            
            if(resultado)
                cout << sum <<endl;
            else
                cout << -1 << endl; 
        }
        else
        {
           resultado = B/A;

            while( resultado > 1)
            {   
                sum++;
                resultado = resultado/fracao[i];
                if((resultado%fracao[i]) != 0)
                {
                    i++;
                }
            }   

            if(resultado)
                cout << sum <<endl;
            else
                cout << -1 << endl; 
        }
        
    
    
    return 0;
}