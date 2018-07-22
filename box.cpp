#include<iostream>
#include"gotoxy.h"

using namespace std;

  int main() {

     char tlc=201,h=205,trc=187,v=186,blc=200,brc=188,sp=32,lf=10;
     int sh=0;

     gotoxy(25,6);
     for(int i=0;i<1;i++) {
         cout<<tlc;
        for (int j=0;j<40;j++) {
         cout<<h;
        }
        cout<<trc;
       }

      for (int l=0;l<10;l++) {
            gotoxy(25,1);
        for (int k=0;k<1;k++) {
             cout<<v;
           for (int k=0;k<40;k++) {

              if(l==5) {
                 if(sh==0) {
                  cout<<"hellow world";
                  sh++;
                  }
                 else {}
                 }
              else  cout<<sp;
             }
            cout<<v;
           }
          }

    gotoxy(25,1);
    for(int i=0;i<1;i++) {
         cout<<blc;
        for (int j=0;j<40;j++) {
         cout<<h;
        }
        cout<<brc;
       }

  }
