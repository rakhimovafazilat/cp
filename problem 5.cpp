#include <iostream>
 using namespace std;
 
 int main (){
     int h;
     cout << "Enter hight:" ;
     cin >> h;
     int start = h-1,counter = 1;
     for(int i = 1;i < h; i++){
         for(int j = 1;j < start; j++){
             cout << " ";
         }
        
         for(int j=0; j < counter; j++){
             cout << "*";
         } 
          cout << endl;
          start--;
         counter+=2;
        
     }
     
     return 0;
 }
