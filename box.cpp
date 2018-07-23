#include<iostream>
#include"gotoxy.h"
#include<conio.h>

using namespace std;

  int main() {

     char tlc=201,h=205,trc=187,v=186,blc=200,brc=188,sp=32,lf=10;
     int sh=0,l;
     char text[15];

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
                    int s=40,temp,n=0;
                    char ch,null=0,bs=8;
                    s-=l;
                    temp=s/2;
                     while(temp) {
                      cout<<sp;
                      temp--;
                       }

                        while((ch=getch())!=13) {

                            text[n]=ch;n++;
                            cout<<bs<<ch;
                        }

                     cout<<text;
                      temp=s/2;
                     while(temp) {
                      cout<<sp;
                      temp--;
                       }
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

/**       char ch,null=0,bs=8;
       int n=0;

         for (int a=0;a<68;a++) cout<<bs;

         while((ch=getch())!=13) {

             text[n]=ch;n++;
             cout<<bs<<ch;
          }  */

  }
