#include<iostream>
#include<conio.h>

 using namespace std;

  void loop(bool life,int year)
{ 
   int me=0;
  
   while(life)
   {
     me++;
     //cout<<"\n"<<me;
     if(me==year)
     {
       life=false;
       cout<<"\nme"<<me<<"\nbool "<<life;
       }

      }

   }  



    int main()
{
    int year=10,no=0;
    bool yr=true;

    while(yr)
    {
     no++;
     cout<<"\nno "<<no;
     loop(yr,year);
     cout<<"hellow";
     year--;
     if (year==0)
     {
       yr=false;
       }

       }


   }    
