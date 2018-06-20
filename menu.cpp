#include<iostream>
#include<conio.h>
#include<stdlib.h>

int menudesign();
void jump(char);


using namespace std;
int main()

 {
   system("cls");
   char jmp;
    
   menudesign();
   cin>>jmp;
   
   jump(jmp);
}


  
 

  int menudesign()
   { 
     
     char d1=177,lf=10,si=15;
     int i;

     cout<<lf;
   for(i=0;i<80;i++)
  { 
    cout<<d1; 
     }

  cout<<"\n\t\t\t\t"<<si<<"MENU"<<si<<lf<<lf;

   for(i=0;i<80;i++)
  {
    cout<<d1;  

     }
         }

 void jump(char jmp)
 {
    switch(jmp)
  {
    case '1':
    system("cls");
    cout<<"New page";
    break;
 
 }

 jmp=getch();
 switch(jmp)
 { 
  case '0':
  system("cls");
  menudesign();
  break;
 } 
     }
