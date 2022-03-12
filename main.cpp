#include <iostream>
using namespace std;

int main(){
  float a, b, c, Atriangolo=0, Aquadrato=0, Arettangolo=0, Atrapezio=0;
  cout<< " La base del triangolo = a "<< " L'altezza del triangolo = b " <<endl;
  cin>> a >> b;
  cout<< " L'area del triangolo = ((a*b)/2) " <<endl;
  cout<< ((a*b)/2) <<endl;
  
  cout<< " Il lato del quadrato = a "<<endl;
  cin>> a;
  cout<< " L'area del quadrato = (a*a) " <<endl;
  cout<< (a*a) <<endl;
  
  cout<< " Il primo lato del rettangolo = a " << " Il secondo lato del rettangolo = b" <<endl;
  cin>> a >> b;
  cout<< " L'area del rettangolo = (a*b) "<<endl;
  cout<< (a*b) <<endl;
  
  cout<< " La base minore del trapezio = a " << " La base maggiore del trapezio = b " << " L' altezza del trapezio = c <<endl;
  cin>> a >> b >> c;
  cout<< " L'area del trapezio = (((a+b)*c)/2) " <<endl;
  cout<< (((a+b)*c)/2) <<endl;
  
  return 0;

}
