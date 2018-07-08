#include<iostream>


//testing constructor :: Tested;


using namespace std;
class my {
   
   public:
   int a,b;


   my() {
    cout<<"this is satis";
    
   }

   my(int x,int y) {
      
      cout<<"hellow\n";
      a=x;
      b=y;

      cout<<"bbye"<<"\n test";
   
   }


};

   int main() {
     my ob;
   
     my obj(10,20);
     //cout<<obj.a<<obj.b;
   }
