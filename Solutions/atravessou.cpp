#include <iostream>
using namespace std;

int main(void){
   int n, l, i, j, aux = -1, cont = 0;
   cin >> n >> l;
   int *x = new int[n];
   int *y = new int[n];
   for(i=0; i < n; i++){
       cin >> x[i] >> y[i];       
   }
   
   for(i=0; i < l; i++){
       cont = 0;
       for(j=0; j < n; j++){
           if(i == y[j]){
           	cont = 0;
           	break;
           }else{
           	cont++;
           }          	
       }
       if(cont == n){
           aux = i;
           break;
       }
   }
   cout << aux << '\n';
   
   return 0;
}
