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
     
   void body(int loop)
   { 
    bool life=true;
     
     while(life)
     {  
        me++; 
      cout<<"\n"<<me;	
      if(me==loop)
      {
        life=false; 
	}
      
       }
    }
 };    

   int main()
 {
     my life(0);
     int years=10,chk=0;
     bool yrs=true;
    
    while (yrs)
    {
       life.body(years);
       chk++;
       years--;
       if(chk==2)
       break;
       if(years==0)
      {
      yrs=false;
        }
     }

     getch();
 } 

  
