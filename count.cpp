#include<iostream>
#include<conio.h>

using namespace std;



    void esc()
 {  int x,z; cin>>x>>z; 
    string str;
    
    str=getch();
    cout<<"str "<<str;

    }   
 

    int main()

{
   esc();              
   int count=1; 
   char chk=27;
  
   string a,b,c,d;

     for (int o=0;o<2;o++)
     {
       
       if(count==1)
       { cout<<"\nenter a";
         getline(cin,a);
	 cin>>a;
	 count++;
         // if(a==chk)        //error
	  //  break;
           
          }
        if(count==2)
       { cout<<"b";
         getline(cin,b);
	 cin>>b;
	 count++;
         // if(b==chk)
	 // break;


	 }
  
       if(count==3)
       { cout<<"c";
         getline(cin,c);
        
	 count++;
         // if(c==chk)
	 // break;
 
	 }
    

        if(count==4)
       { cout<<"d";
         getline(cin,d);
	 count++;
        // if(d==chk)
	//  break;


          }
       }

      cout<<"a"<<a<<"\nb"<<b<<"\nc"<<c<<"\nd"<<d<<"\ncount "<<count; 
       getch();
   return 0;

}    

