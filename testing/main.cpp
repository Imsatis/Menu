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

     void add() {
      int r;
     //return
      r=a+b;
   }

 };

int main()
{
    var obj;
    obj.add();
    cout<<obj.r;

    return 0;
}

