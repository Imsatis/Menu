//CONTROL CHARACTER TEST


#include<iostream>
#include<conio.h>

  using namespace std;

  class control {


      char check,enter;

 public:
     control(int x) {

       check=x;
       enter=13;
       ;

     }

    void show() {

      // cout<<"\n"<<check<<"\t"<<(int) check;
      string test="i m satis";
      cout<<enter<<check<<test<<check;getch();cout<<test;
    }

  };



  int main() {

     int ch;
    int i;

    while(ch) {
    cin>>i;
    control ob(i);
    ob.show();
    if (i==32) ch=0;

    }
//    getch();
     return 000;
    }


