#include <iostream>
using namespace std;
int main()
 {
   
  float S =0, L =0;
  char N [20];
  cout << "Digite su Nombre"<<endl;
  cin >> N;
  cout << "Digite la cantidad de segundos"<< endl;
  cin >> S;
  L = (S / 1.577E8);
  cout << N << " La convercion de segundos a lustros es: " <<L <<endl;

}