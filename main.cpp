#include <iostream>
using namespace std;

int main(){
  float a, b, c, Atriangolo= ((a*b)/2), Aquadrato= (a*a), Arettangolo= (a*b) , Atrapezio= (((a+b)*c)/2);
  cout<< " a "<< " b " <<endl;
  cin>> a >> b;
  cout<< ((a*b)/2) <<endl;
  
  cout<< " a "<<endl;
  cin>> a;
  cout<< (a*a) <<endl;
  
  cout<< " a " << " b " <<endl;
  cin>> a >> b;
  cout<<  (a*b) <<endl;
  
  cout<< " a " << " b " << " c " <<endl;
  cin>> a >> b >> c;
  cout<< (((a+b)*c)/2) <<endl;
  
  return 0;

}
