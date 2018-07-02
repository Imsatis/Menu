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
    cout<<"\nstep 2nd 2nd loop start  catch "<<loop;getch();
    bool life=true;
     
     while(life)
     {  
        me++; 
     cout<<"\nstep 3rd  "<<me<<"loop= "<<loop;getch();

      if(me==loop)
      {
        life=false; 
	cout<<"\nstop loop 2nd end bye bye "<<life;getch();
	}
     
       cout<<"again loop 2nd life "<<life;getch();

       }
    }
 };    

   int main()
 {
     my life(0);
     int years=2;
     bool yrs=true;
    
    while (yrs)
    {  cout<<"step 1: loop 1st start  throw "<<years;getch();
       life.body(years);
       years--;
       cout<<"\n years"<<years;

       
       if(years==0)
      {
      yrs=false;
        }
     }
     cout<<"\n me "<<life.me;
     getch();
 } 

  
