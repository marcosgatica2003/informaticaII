#include <iostream>
#include <cstdlib>
using namespace std;
 
struct mapaBits2 {
   unsigned short int campo1:3;
   unsigned short int campo2:4;
   unsigned short int campo3:2;
   unsigned short int campo4:1;
   unsigned short int campo5:6;
};

int main()
{
   mapaBits2 x;
   
   x.campo2 = 12;
   x.campo4 = 1;
   cout << x.campo2 << endl;
   cout << x.campo4 << endl;
   getchar();
   getchar();
   return 0;
}
