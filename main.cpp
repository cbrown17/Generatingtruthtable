#include <iostream>
using namespace std;

int main() {
  //Declare and initialize onjects 
  bool A=false, B=false, C=false;

  //print table header 
  cout << "TABLE 3.2\n A\tB\tC\t\tA && B || B && C"
       << endl;
  cout << "-------------------------------------------------"
       << endl;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;


  //toggle C
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;

  //toggle B and C 
  B = !B;
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;

  //Toggle C
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;

  //Toggle A, B, and C
  A = !A;
  B = !B;
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;


 //Repeat the pattern for B and C...

  //toggle C
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;

  //toggle B and C
  B = !B;
  C = !C;
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;
  

  //toggle C 
  C = !C; 
  cout << A << '\t' << B << '\t' << C << "\t\t\t"
       << ((A && B) || (B && C)) << endl;
}