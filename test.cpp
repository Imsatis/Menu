#include<iostream>
#include<conio.h>

using namespace std;

class my
{  
   public:
   int me;
    my(int skill)
   {
     me=skill;
     
     } 
     
   void body(bool life)
   { 
     while(life)
     {  
        me++; 
      
       }
    }
 };    

   int main()
 {
     my life(0);
     int years=1000;
     bool yrs=true;
    
    while (yrs)
    {
       life.body(yrs);
       years--;
       cout<<"\n"<<life.body().me;
       if(yrs==0)
       yrs==false;
     }

     getch();
 } 

  
