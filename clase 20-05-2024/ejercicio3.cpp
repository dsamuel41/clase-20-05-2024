#include <iostream>
#include <cstdlib>
using namespace std;
int main (){

    //Declaramos variables//
     int a=0;
     int b=0;
     int g=0;
     int c=0;
     int n=0;


    for (int m= 0; m < 3; m++){


     //Pedimos valores//
     cout <<" Juego piedra, papel o tijeras" "\n";
     cout <<" Seleccione piedra_1, papel_2, tijeras_3" "\n";
     cin >> a;
     b=1+rand()%3;
     cout << b;


     if (a==b){
        cout <<"Han quedado empate" "\n";
        g=g+1;
     }else if ((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2) )
     {
        cout <<"Ganaste felicidades" "\n";
        c=c+1;

     }else {
        cout << "Perdiste " "\n";
        n=n+1;
     }

    }
    
    
     
    return 0;
}