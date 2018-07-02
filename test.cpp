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
    cout<<"catch "<<loop;getch();
    bool life=true;
     
     while(life)
     {  
        me++; 
     cout<<"\n"<<me<<"loop= "<<loop;

      if(me==loop)
      {
        life=false; 
	}
     
       cout<<"life "<<life;

       }
    }
 };    

   int main()
 {
     my life(0);
     int years=2;
     bool yrs=true;
    
    while (yrs)
    {  cout<<"throw "<<years;getch();
       life.body(years);
       years--;
       cout<<"\n chk "<<years;

       
       if(years==0)
      {
      yrs=false;
        }
     }
     cout<<"\n me "<<life.me;
     getch();
 } 

  
