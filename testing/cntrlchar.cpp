//CONTROL CHARACTER TEST


#include<iostream>
#include<conio.h>

  using namespace std;

  class control {


      char check;

 public:
     control(char x) {

       check=x;

     }

    void show() {

       cout<<"\n"<<check<<"\t"<<(int) check;
    }

  };



  int main() {

    int ch;
    int i=0;

    while((ch=getch()!=32)) {
    control ob(i);
    ob.show();
    i++;
//    getch();
    }


}
