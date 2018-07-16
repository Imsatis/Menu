//Argument testing......



#include <iostream>

int add(int,int);

using namespace std;


 class var {

   int a,b;

   public:
     var() { a=1000;b=100; }

    var(int x,int y){
       a=x;b=y; }

     int add() {

     return a+b;
   }

 };

int main()
{
    var obj;
    int r=obj.add();
    cout<<r;

    return 0;
}

