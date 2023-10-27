#include <iostream>

using namespace std;
char fazilat(int j){
    if(j>=32 && j<=126){
        return char(j);
    }else{
        return ('W');
    }
}
int main(){
    int x;
    cin>>x;
    char a=fazilat(x);
    if(a=='W'){
        cout<<"Wrong";
    }else{
        cout<<a;
    }
     return 0;
}
