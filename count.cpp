#include<iostream>
#include<conio.h>

using namespace std;

    int main()

{
   int count=1,chk;
  
   char var[5];
   string a,b,c,d;

     for (int o=0;o<4;o++)
     { 
          cin>>var[o];
      
       }
     
     for (int i=0;i<5;i++)
      {
        cout<<var[i]<<"\n"; 

        }
     switch(chk)
     {  if(count==1)
       { 
         getline(cin,a);
	 cin>>chk;
	 count++;
         case 0:
	 break;

          }
        if(count==2)
       { 
         getline(cin,b);
         cin>>chk;
	 count++;
	 case 1:
	 break;

	 }
  
       if(count==3)
       { 
         getline(cin,c);
         cin>>chk;
	 count++;
	 case 2:
	 break;

	 }
    

        if(count==4)
       { 
         getline(cin,d);
         cin>>chk;
	 case 3:
	 break;

        }
      }
      // getch();


   return 0;

}    
