#include<iostream>
#include<conio.h>
#include<fstream>

         //testing for edit environment by user;


using namespace std;

  struct all_items {

    string a,b,c,d,e,f,g,h,i,j,k,l;   
  };  
     all_items item;


class data {

     public:
     void read_file(int &count) {
      
      ifstream read;
      read.open("data.txt");
      read>>count;
            
         }

     void save_file(int &count) {

      ofstream save("data.txt");
      save<<count; 
       
         } 


     void read_file( ) {
      
      ifstream read;
      read.open("menu_data.txt");
      read>>item.a>>item.b>>item.c>>item.d>>item.e>>item.f>>item.g>>item.h>>item.i>>item.j>>item.k>>item.l;  //all items 
            
         }

     void save_file( ) {

      ofstream save("menu_data.txt");
      //save<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"<<k<<"\n"<<l<<"\n"; 
       
      save<<item.a<<"\n"<<item.b<<"\n"<<item.c<<"\n"<<item.d<<"\n"<<item.e<<"\n"<<item.f<<"\n"<<item.g<<"\n"<<item.h<<"\n"<<item.i<<"\n"<<item.j<<"\n"<<item.k<<"\n"<<item.l; 

         }      


     string edit_mode(int &count) {

        char ch;
        string st;
        while((ch=getch())!=27) {
              
            cout<<ch;
            st+=ch;
                
          if(ch==13) {

            cout<<"\n";
            break;
              
              }
           }   
                
             if (ch==27) {
              st="";
             return st;
               }
             count++;  
            return st;  

       }


     void show(int count) {
      int ino=1;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.a;  ino++;
  
  if(ino<count)  
    cout<<"\n"<<ino<<" "<<item.b;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<item.c;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<item.d;  ino++;

  if(ino<count)   
    cout<<"\n"<<ino<<" "<<item.e;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.f;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.g;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.h;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.i;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.j;  ino++;
    
  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.k;  ino++;

  if(ino<count)
    cout<<"\n"<<ino<<" "<<item.l<<"\n";  ino++;
    
          }  


   };

     
     int main() {
  
     //char ch;
     int count; 
     string str;
     data obj; 
     obj.read_file();
     obj.read_file(count);
     obj.show(count);
     getch();
       
      
      // obj.read_file(count);

       switch(count) {

           case 1:
              cout<<"1.";
              str=obj.edit_mode(count);
              item.a=str;
              if(str=="")
                break;             

           case 2:
              cout<<"2.";
              str=obj.edit_mode(count);
              item.b=str;
              if(str=="")
                break;               
	         
           case 3:
             cout<<"3.";
             str=obj.edit_mode(count);
             item.c=str; 
              if(str=="")
                break;             
           
           case 4:
             cout<<"4.";
             str=obj.edit_mode(count);
             item.d=str;
              if(str=="")
                break;

           case 5:
              cout<<"5.";
              str=obj.edit_mode(count);
              item.e=str;
              if(str=="")
                break;         
           
           case 6:
              cout<<"6.";
              str=obj.edit_mode(count);
              item.f=str;
              if(str=="")
                break;        

           case 7:
              cout<<"7.";
              str=obj.edit_mode(count);
              item.g=str;
              if(str=="")
                break;        
           
           case 8:
              cout<<"8.";
              str=obj.edit_mode(count);
              item.h=str;
              if(str=="")
                break;

           case 9:
              cout<<"9.";
              str=obj.edit_mode(count);
              item.i=str;
              if(str=="")
                break;

           case 10:
              cout<<"10.";
              str=obj.edit_mode(count);
              item.j=str;
              if(str=="")
                break;                                  

           case 11:
              cout<<"11.";
              str=obj.edit_mode(count);
              item.k=str;
              if(str=="")
                break;        
      
           case 12:     
              cout<<"12.";
              str=obj.edit_mode(count);
              item.l=str;
              if(str=="")
                break;                  
 
        }          

           obj.save_file(count);
           obj.save_file();



        
	/**
       
       if(count==1) { 
       
           cin>>b;
           count++; 
        
             }
	
	
       if(count==2) { 
       
           cin>>c;
           count++;

              }

       if(count==3) { 
          
           cin>>d;
           count++;
        
              }
	
	     if(count==4) { 
       
           cin>>e;
           count++;
        
              }

       if(count==5) { 
         
           cin>>f;
           count++;       
              
              }

       if(count==6) { 
       
           cin>>g;
           count++;
           
              }
     
       if(count==7) { 
          
           cin>>h;
           count++; 
           
              }

       if(count==8) { 
       
           cin>>h;
           count++;
         
              }

       if(count==9) { 

           cin>>i;
           count++;
        
              }
       
        if(count==10) { 
       
           cin>>j;
           count++;
        
              }
 
        if(count==11) { 
       
           cin>>k;
           count++;
        
              }

       if(count==12) { 
       
           cin>>l;
           count++;
         
              }  **/


    obj.show(count);
     getch();
       }
