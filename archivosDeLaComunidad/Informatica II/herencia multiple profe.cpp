#include <iostream>
using namespace std;

      class base1{
            protected:      //protected para poder heredar
                      int valor;
            public:
                   base1 (int x){valor=x;}
                   int getdato(){return valor;}
                 };

      class base2{
            protected:
                      char letra;
            public:
                   base2(char c){letra=c;}
                   char getdato(){return letra;}
                 };
            
      class derivado : public base1,public base2
                 {
                     private: 
                              double read;
                     public:
                            derivado(int,char,double);
                            double getread();
                 }; 
                 
      derivado :: derivado (int t, char c, double r): base1(t), base2(c)
                 { read = r; }
      
      double derivado :: getread (){return read;} 
      
      int main()
      {
          base1 b1(10);
          base2 b2 ('z');
          derivado d(7,'A',5.5);
          cout<<"El objeto b1 contiene: "<<b1.getdato()<<"\n"; 
          cout<<"El objeto b2 contiene: "<<b2.getdato()<<"\n";
          cout<<"El objeto d contiene los datos: ";
          cout<<d.base1::getdato()<<"  ";
          cout<<d.base2::getdato()<<"  ";
          cout<<d.getread()<<" ";
         // system("pause");
      }
