#include "Class_Template.h"


int main() 
{
  int a = 23, b=34, c = 50;
  char j = 'a', k = 'b';
  string t = ("David");
  string z = ("Perry");
  
  
  //Maximum Template Class **************
  cout << "\nOutPut Maximum Number (Template)" << endl;
  cout<<"int:"<< maximum(3,6) << endl; //interger
  cout<<"double:"<< maximum(289.2, 100.3) << endl; //double
  cout << "char:" << maximum(j , k) << endl; // char
  cout << "string:" << maximum ("David" , "Perry") << endl; //string
  cout << "bool:" << maximum (true,false) << endl; //bool
  
  //Addition Template Class *************
  cout << "\nOutPut Addition (Template)" << endl;
  cout << "int: " << add(a, b, c) << endl;
  cout << "double: " << add(100.2, 200.2, 300.3) << endl;
  cout << "char: " << add('a', 'b', 'c') << endl;
  cout << "string: " << add( t, z, t) << endl;
  cout << "bool:" << add(false, false, false) << endl;

  //Minimum Template Class **************
  cout << "\nOutPut Minimum Number (Template)" << endl;
  cout<< "int:" << cmin(a,b) << endl;
  cout<< "double:" << cmin(23.4,12.6) << endl;
  cout<< "char:" << cmin('a','b') << endl;
  cout << "string:" << cmin(a,b)<< endl;
  cout << "bool:" << cmin(false,true) << endl; 

  //Multiple Template Class *************
  cout << "\nOutPut Multiplication (Template)" << endl;
  cout<< "int:" << cmulti(a,b) << endl;
  cout<< "double:" << cmulti(23.4,12.6) << endl;
  cout<< "char:" << cmulti('a','b') << endl;
  cout << "string:" << cmulti(a,b)<< endl;
  cout << "bool:" << cmulti(false,true) << endl;

  //Swap Number Template Class ************* Must Use Variables if using "&"
  cout << "\nTemplate used to SWAP Numbers" << endl;
  cout << endl;
  CSwap(a,b);
  cout << endl;
  CSwap(23.4,12.6);
  cout << endl;
  CSwap('a','b');
  cout << endl;
  CSwap(a,b);
  cout << endl;
  CSwap(false,true);
  cout << endl;
  
  
  
  
  return 0;
}
